/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:45:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 12:57:54 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "mem.h"

RESULT	string_push(t_string *self, const char *buffer, t_u32 buffer_size)
{
	if (string_cap_extend(self, buffer_size) == FAIL)
		return (fail(FNAME));
	mem_copy(self->chars + self->len, buffer, buffer_size);
	self->len += buffer_size;
	return (SUCCESS);
}
