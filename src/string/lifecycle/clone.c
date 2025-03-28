/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:13:19 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 12:52:03 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "mem.h"
#include "math.h"

RESULT	string_clone(t_string *self, t_string *src)
{
	*self = (t_string){0};
	if (string_cap_resize(self, src->cap) == FAIL)
		return (fail(FNAME));
	mem_copy(self->chars, src->chars, src->len);
	self->len = src->len;
	return (SUCCESS);
}
