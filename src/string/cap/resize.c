/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:40:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 12:11:52 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"
#include "string.h"

RESULT	string_cap_resize(t_string *self, t_u32 new_cap)
{
	void	**buffer;

	buffer = (void **)&self->chars;
	if (buffer_resize(buffer, &self->cap, new_cap) == FAIL)
		return (fail(FNAME));
	if (self->len > new_cap)
		self->len = new_cap;
	return (SUCCESS);
}
