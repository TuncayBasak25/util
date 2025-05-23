/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:40:18 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/24 17:29:49 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FD_H
# define FD_H

# include "structs/s_fd.h"
# include "structs/s_str.h"

# define FD_STDIN 0
# define FD_STDOUT 1
# define FD_STDERR 2

# define FD_DEFAULT_READ_BUFFER_SIZE 1024

typedef enum e_fdmode
{
	FD_READ,
	FD_WRITE,
	FD_RDWR,
}	t_fdmode;

RESULT	fd_open(t_fd *fd, t_cstr fname, t_fdmode mode);
RESULT	fd_create(t_fd *fd, t_cstr fname, t_fdmode mode);
RESULT	fd_append(t_fd *fd, t_cstr fname, t_fdmode mode);

RESULT	fd_stat_byte_count(t_fd fd, t_u64 *size);

RESULT	fd_read_to_buffer(t_fd fd, void *buffer, t_u32 buffer_size, t_u32 *byte_read);

RESULT	fd_read_n_to_str(t_fd fd, t_str *str, t_u32 n);
RESULT	fd_read_all_to_str(t_fd fd, t_str *str);

void	fd_write_buffer(t_fd fd, const void *buffer, t_u32 buffer_size);
void	fd_write_char(t_fd fd, char c);
void	fd_write_cstring(t_fd fd, const char *cstring);
void	fd_write_string(t_fd fd, t_string *string);
void	fd_write_signed(t_fd fd, t_i64 number);
void	fd_write_unsigned(t_fd fd, t_u64 number);
void	fd_write_hex_lower(t_fd fd, t_u64 number);
void	fd_write_hex_upper(t_fd fd, t_u64 number);

#endif