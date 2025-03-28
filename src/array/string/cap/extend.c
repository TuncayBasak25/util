/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:40:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/27 10:51:33 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array/array_string.h"
#include "math.h"

RESULT	array_string_cap_extend(t_array_string *self, t_u32 char_count)
{
	t_u32	new_cap;

	new_cap = self->len + char_count;
	if (new_cap < char_count)
		return (fail("array_string_cap_extend: integer overflow!"));
	if (new_cap <= self->buffer.size)
		return (SUCCESS);
	new_cap = nearest_greater_power_of_2(new_cap);
	if (new_cap < ARRAY_STRING_DEFAULT_MIN_CAP)
		new_cap = ARRAY_STRING_DEFAULT_MIN_CAP;
	if (array_string_cap_resize(self, new_cap) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
