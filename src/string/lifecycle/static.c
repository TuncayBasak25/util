/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:13:19 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 12:40:55 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_static(t_string *self, char *buffer, t_u32 buffer_size)
{
	self->chars = buffer;
	self->cap = buffer_size;
	self->len = 0;
}
