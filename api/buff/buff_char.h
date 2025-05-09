/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buff_char.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:51:07 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 16:08:10 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFF_CHAR_H
# define BUFF_CHAR_H

# include "buff/s_buff_char.h"

t_buff_char
buff_char_new(t_u32 len);

void
buff_char_drop(t_buff_char self);

t_buff_char
buff_char_clone(const t_buff_char *self);

t_buff_char
buff_char_slice(const t_buff_char *self, t_slice slice);

t_result
buff_char_copy(t_buff_char *self, const t_buff_char *src);

t_result
buff_char_ncopy(t_buff_char *self, const t_buff_char *src, t_u32 len);

t_view_char
buff_char_view(const t_buff_char *self, t_slice slice);

t_buff_char
buff_char_from_view(t_view_char view);

t_view_char
view_char_subview(t_view_char src, t_slice slice);

void
view_char_copy(t_view_char self, t_view_char src);

#endif