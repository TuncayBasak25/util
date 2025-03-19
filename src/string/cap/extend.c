/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:40:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/19 07:12:26 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "math.h"

RESULT	string_cap_extend(t_string *self, t_u32 char_count)
{
	t_u32	new_cap;

	new_cap = self->len + char_count;
	if (new_cap <= self->buffer.size)
		return (SUCCESS);
	new_cap = nearest_greater_power_of_2(new_cap);
	if (new_cap < STRING_DEFAULT_MIN_CAP)
		new_cap = STRING_DEFAULT_MIN_CAP;
	return (string_cap_resize(self, new_cap));
}
