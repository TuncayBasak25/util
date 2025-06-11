/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_realloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:41:35 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 21:58:17 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include "math.h"
#include <stdlib.h>

void	*mem_realloc(void *ptr, t_size old_size, t_size new_size)
{
	void	*new;

	if (new_size == 0)
	{
		mem_free(ptr);
		return (NULL);
	}
	new = mem_alloc(new_size);
	if (new == NULL)
		return (NULL);
	mem_copy(new, ptr, umin(old_size, new_size));
	mem_free(ptr);
	return (new);
}
