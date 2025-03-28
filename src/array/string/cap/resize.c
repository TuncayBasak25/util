/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:40:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/27 10:48:39 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"
#include "array/array_string.h"

RESULT	array_string_cap_resize(t_array_string *self, t_u32 new_cap)
{
	if (buffer_resize(&self->buffer, new_cap) == FAIL)
		return (fail(FNAME));
	self->items = self->buffer.ptr;
	if (self->len > new_cap)
		self->len = new_cap;
	return (SUCCESS);
}
