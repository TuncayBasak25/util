/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:40:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 09:26:07 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arry/arry_str.h"
#include "math.h"

RESULT	arry_str_cap_extend(t_arry_str *self, t_u32 extra)
{
	t_u64	new_cap;

	new_cap = self->len + extra;
	if (new_cap <= self->cap)
		return (SUCCESS);
	new_cap = nearest_greater_power_of_2(new_cap);
	new_cap = umin(new_cap, ARRY_STR_DEF_MIN_CAP);
	if (arry_str_cap_resize(self, new_cap) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
