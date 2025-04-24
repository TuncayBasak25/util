/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:44:37 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 12:13:44 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"

RESULT	buffer_extend(void **ptr, t_u32 *size, t_u32 len, t_u32 extra)
{
	t_u64	new_size;

	new_size = len + extra;
	if (new_size < *size)
		return (SUCCESS);
	if (buffer_resize(ptr, size, new_size) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
