/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_shift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 22:02:53 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 23:23:55 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include "math.h"

void	mem_shift(void *ptr, t_size size, t_isize offset)
{
	t_size	abs_offset;

	if (!ptr ||  offset == 0)
		return ;
	abs_offset = uabs(offset);
	if (abs_offset >= size)
		return ;
	if (offset > 0)
		mem_copy(ptr + abs_offset, ptr, size - abs_offset);
	else
		mem_copy(ptr, ptr + abs_offset, size - abs_offset);
}
