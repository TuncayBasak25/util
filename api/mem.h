/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:43:54 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 14:49:12 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "core.h"

void
mem_copy(void *dst, const void *src, t_u32 n);

void
*mem_alloc(t_u32 count, t_u32 size);

void
*mem_calloc(t_u32 count, t_u32 size);

void
mem_free(void *ptr);

#endif