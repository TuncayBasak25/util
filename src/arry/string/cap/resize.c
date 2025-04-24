/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:40:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 09:16:42 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"
#include "arry/arry_str.h"
#include "math.h"

RESULT	arry_str_cap_resize(t_arry_str *self, t_u64 new_cap)
{
	if (self->len > new_cap)
		self->len = new_cap;
	new_cap *= sizeof(t_str);
	if (buffer_resize((void **)&self->buff, &self->cap, new_cap) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
