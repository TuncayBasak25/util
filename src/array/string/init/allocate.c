/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:10:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/27 10:44:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array/array_string.h"

RESULT	array_string_init_allocate(t_array_string *self, t_u32 cap)
{
	*self = (t_array_string){0};
	if (array_string_cap_extend(self, cap) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
