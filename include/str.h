/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:03:31 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/24 19:30:03 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include "structs/s_str.h"
# include "structs/arry/s_arry_str.h"
# include "structs/arry/s_arry_u32.h"

# define STRING_DEFAULT_MIN_CAP 16

void	str_new_empty(t_str *new);
RESULT	str_new_reserve(t_str *new, t_u32 min_cap);

RESULT	str_new_fill_str(t_str *new, t_u32 len, const char *str);
RESULT	str_new_fill_char(t_str *new, t_u32 len, char c);
RESULT	str_new_fill_cstr(t_str *new, t_u32 len, t_cstr cstr);
RESULT	str_new_fill_signed(t_str *new, t_u32 len, t_i64 n);
RESULT	str_new_fill_unsigned(t_str *new, t_u32 len, t_u64 n);

void	str_drop(t_str *own);

RESULT	str_clone(t_str *self, t_str *out);
void	str_move(t_str *own_self, t_str *out);
RESULT	str_copy(t_str *self, const t_str *src);
void	str_copy_own(t_str *self, t_str *own);

RESULT	str_from_str(t_str *new, const t_str *src);
RESULT	str_from_cstr(t_str *new, const t_cstr src);
RESULT	str_from_signed(t_str *new, t_i64 n);
RESULT	str_from_unsigned(t_str *new, t_u64 n);
RESULT	str_from_file(t_str *new, t_cstr filename);

RESULT	str_grow(t_str *self, t_u32 need);
void	str_shrink(t_str *self);

void	str_clear(t_str *self);

void	str_cut_len(t_str *self, t_u32 i, t_u32 len);
void	str_cut_range(t_str *self, t_u32 start, t_u32 end);
void	str_cut_char(t_str *self, t_u32 i);

RESULT	str_pop_len(t_str *self, t_u32 i, t_u32 len, t_str *out);
RESULT	str_pop_range(t_str *self, t_u32 start, t_u32 end, t_str *out);
void	str_pop_char(t_str *self, t_u32 i, char *out);

RESULT	str_sub_len(const t_str *self, t_u32 i, t_u32 len, t_str *out);
RESULT	str_sub_range(const t_str *self, t_u32 start, t_u32 end, t_str *out);
void	str_get_char(const t_str *self, t_u32 i, char *out);

RESULT	str_write_str(t_str *self, t_u32 i, const t_str *str);
RESULT	str_write_char(t_str *self, t_u32 i, char c);
RESULT	str_write_cstr(t_str *self, t_u32 i, t_cstr cstr);
RESULT	str_write_signed(t_str *self, t_u32 i, t_i64 n);
RESULT	str_write_unsigned(t_str *self, t_u32 i, t_u64 n);
RESULT	str_write_hex_upper(t_str *self, t_u32 i, t_u64 n);
RESULT	str_write_hex_lower(t_str *self, t_u32 i, t_u64 n);

RESULT	str_insert_str(t_str *self, t_u32 i, const t_str *str);
RESULT	str_insert_char(t_str *self, t_u32 i, char c);
RESULT	str_insert_cstr(t_str *self, t_u32 i, t_cstr cstr);
RESULT	str_insert_signed(t_str *self, t_u32 i, t_i64 n);
RESULT	str_insert_unsigned(t_str *self, t_u32 i, t_u64 n);
RESULT	str_insert_hex_upper(t_str *self, t_u32 i, t_u64 n);
RESULT	str_insert_hex_lower(t_str *self, t_u32 i, t_u64 n);

RESULT	str_replace_str_str(t_str *self, const t_str *search, const t_str *replace, t_u32 count);
void	str_replace_str_char(t_str *self, const t_str *search, char replace, t_u32 count);
RESULT	str_replace_str_cstr(t_str *self, const t_str *search, t_cstr replace, t_u32 count);

RESULT	str_replace_char_str(t_str *self, char search, const t_str *replace, t_u32 count);
void	str_replace_char_char(t_str *self, char search, char replace, t_u32 count);
RESULT	str_replace_char_cstr(t_str *self, char search, t_cstr replace, t_u32 count);

RESULT	str_replace_cstr_str(t_str *self, t_cstr search, const t_str *replace, t_u32 count);
void	str_replace_cstr_char(t_str *self, t_cstr search, char replace, t_u32 count);
RESULT	str_replace_cstr_cstr(t_str *self, t_cstr search, t_cstr replace, t_u32 count);

BOOL	str_has_str(const t_str *self, const t_str *search);
BOOL	str_has_char(const t_str *self, char search);
BOOL	str_has_cstr(const t_str *self, t_cstr search);

OPTION	str_find_str(const t_str *self, const t_str *search, t_u32 *i);
OPTION	str_find_char(const t_str *self, char search, t_u32 *i);
OPTION	str_find_cstr(const t_str *self, t_cstr search, t_u32 *i);

OPTION	str_rfind_str(const t_str *self, const t_str *search, t_u32 *i);
OPTION	str_rfind_char(const t_str *self, char search, t_u32 *i);
OPTION	str_rfind_cstr(const t_str *self, t_cstr search, t_u32 *i);

RESULT	str_find_all_str(const t_str *self, const t_str *search, t_arry_u32 *out);
RESULT	str_find_all_char(const t_str *self, char search, t_arry_u32 *out);
RESULT	str_find_all_cstr(const t_str *self, t_cstr search, t_arry_u32 *out);

void	str_count_str(const t_str *self, const t_str *search, t_u32 *count);
void	str_count_char(const t_str *self, char search, t_u32 *count);
void	str_count_cstr(const t_str *self, t_cstr search, t_u32 *count);

RESULT	str_split_str(const t_str *self, const t_str *del, t_arry_str *out);
RESULT	str_split_char(const t_str *self, char del, t_arry_str *out);
RESULT	str_split_cstr(const t_str *self, t_cstr del, t_arry_str *out);

#endif