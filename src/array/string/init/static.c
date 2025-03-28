/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:10:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/27 10:46:56 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array/array_string.h"

void	array_string_init_static(t_array_string *self, t_string *buffer, t_u32 buffer_size)
{
	self->items = buffer;
	self->len = 0;
	self->buffer.size = buffer_size;
}
