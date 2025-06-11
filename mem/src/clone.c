/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_clone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:41:35 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 22:00:17 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include <stdlib.h>

void	*mem_clone(const void *src, t_size byte_count)
{
	void	*new;

	new = mem_alloc(byte_count);
	mem_copy(new, src, byte_count);
	return (new);
}
