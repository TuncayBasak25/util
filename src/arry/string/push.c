/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:27:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 09:28:59 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arry/arry_str.h"

RESULT	arry_str_push(t_arry_str *self, t_str str)
{
	if (arry_str_cap_extend(self, 1) == FAIL)
		return (fail(FNAME));
	self->buff[self->len++] = str;
	return (SUCCESS);
}
