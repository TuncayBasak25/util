/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:40:43 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 08:35:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arry/arry_str.h"

RESULT	arry_str_create(t_arry_str *self, t_u32 cap)
{
	*self = (t_arry_str){0};
	if (arry_str_cap_resize(self, cap) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
