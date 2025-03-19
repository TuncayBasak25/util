/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:43:54 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/18 22:50:58 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "core.h"

RESULT	mem_alloc(void **ptr, t_u32 size);
void	mem_free(void *ptr);

void	mem_copy(void *dst, const void *src, t_u32 n);

#endif