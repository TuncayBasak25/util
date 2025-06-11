/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 22:02:53 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 22:11:10 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	mem_copy(void *dst, const void *src, t_size byte_count)
{
	t_size	i;
	t_u8	*byte_dst;
	t_u8	*byte_src;

	if (!dst || !src || dst == src)
		return ;
	byte_dst = (t_u8 *)dst;
	byte_src = (t_u8 *)src;
	if (byte_src < byte_dst && byte_src + byte_count > byte_dst)
	{
		i = byte_count;
		while (i--)
			byte_dst[i] = byte_src[i];
	}
	else
	{
		i = -1;
		while (++i < byte_count)
			byte_dst[i] = byte_src[i];
	}
}
