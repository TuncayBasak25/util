/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:39:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 11:43:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_H
# define BUFFER_H

# include "core.h"

RESULT	buffer_resize(void **ptr, t_u32 *size, t_u32 new_size);
RESULT	buffer_extend(void **ptr, t_u32 *size, t_u32 len, t_u32 extra);

#endif