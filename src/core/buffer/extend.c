/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:44:37 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 11:53:17 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"
#include "mem.h"
#include "math.h"

RESULT	buffer_extend(void **ptr, t_u32 *size, t_u32 len, t_u32 extra)
{
	t_u32	new_size;

	new_size = len + extra;
	if (new_size < len)
		return (fail("buffer_extend: integer overflow!"));
	if (new_size < *size)
		return (SUCCESS);
	if (buffer_resize(ptr, size, new_size) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
