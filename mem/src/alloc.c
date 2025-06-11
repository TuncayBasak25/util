/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:41:35 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 21:45:18 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include <stdlib.h>

void	*mem_alloc(t_size byte_count)
{
	if (byte_count == 0)
		return (NULL);
	return (malloc(byte_count));
}
