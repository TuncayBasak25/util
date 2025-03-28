/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:40:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 12:11:29 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"
#include "string.h"

RESULT	string_cap_extend(t_string *self, t_u32 char_count)
{
	void	**buffer;

	buffer = (void **)&self->chars;
	if (buffer_extend(buffer, &self->cap, self->len, char_count) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
