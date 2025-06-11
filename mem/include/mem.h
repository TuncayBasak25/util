/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:32:33 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 22:23:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "core.h"

void
mem_copy(void *dst, const void *src, t_size byte_count);

void
mem_shift(void *ptr, t_size size, t_isize offset);

void USE
*mem_alloc(t_size size);

void USE
*mem_realloc(void *ptr, t_size old_size, t_size new_size);

void USE
*mem_clone(const void *src, t_size byte_count);

void
mem_free(void *ptr);

void USE
*mem_free_null(void *ptr);

#endif