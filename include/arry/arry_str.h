/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arry_str.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:36:08 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/24 16:08:28 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRY_STR_H
# define ARRY_STR_H

# include "structs/arry/s_arry_str.h"

# define ARRY_STR_DEF_MIN_CAP 16

RESULT	arry_str_create(t_arry_str *self, t_u32 cap);

RESULT	arry_str_cap_resize(t_arry_str *self, t_u32 new_cap);
RESULT	arry_str_cap_extend(t_arry_str *self, t_u32 item_count);

void	arry_str_destroy(t_arry_str *self);

RESULT	arry_str_get(t_arry_str *self, t_u32 index, t_str *out);
RESULT	arry_str_set(t_arry_str *self, t_u32 index, t_str *str);

RESULT	arry_str_set_own(t_arry_str *self, t_u32 index, t_str *str);

OPTION	arry_str_get_ref(t_arry_str *self, t_u32 index, t_str **out);

OPTION	arry_str_pop(t_arry_str *self, t_str *out);
RESULT	arry_str_push(t_arry_str *self, t_str *str);
RESULT	arry_str_push_own(t_arry_str *self, t_str *str);

OPTION	arry_str_remove(t_arry_str *self, t_u32 index, t_str *out);
void	arry_str_delete(t_arry_str *self, t_u32 index);
RESULT	arry_str_insert(t_arry_str *self, t_u32 index, t_str *str);
RESULT	arry_str_insert_own(t_arry_str *self, t_u32 index, t_str *str);

#endif