/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_string.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:36:08 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 13:11:28 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_STRING_H
# define ARRAY_STRING_H

# include "structs/array/s_array_string.h"

# define ARRAY_STRING_DEFAULT_MIN_CAP 16

void	array_string_create(t_array_string *self);
void	array_string_static(t_array_string *self, t_string *buffer, t_u32 size);

RESULT	array_string_cap_resize(t_array_string *self, t_u32 new_cap);
RESULT	array_string_cap_extend(t_array_string *self, t_u32 item_count);

void	array_string_destroy(t_array_string *self);

OPTION	array_string_get(t_array_string *self, t_u32 index, t_string *out);
void		array_string_set(t_array_string *self, t_u32 index, t_string string);

t_string	array_string_pop(t_array_string *self);
void		array_string_push(t_array_string *self, t_string string);

t_string	array_string_remove(t_array_string *self, t_u32 index);
void		array_string_insert(t_array_string *self, t_u32 index, t_string string);

#endif