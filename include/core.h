/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:32:33 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/24 19:26:01 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# define FNAME __func__

typedef unsigned char		t_u8;
typedef unsigned short		t_u16;
typedef unsigned int		t_u32;
typedef unsigned long long	t_u64;

typedef char				t_i8;
typedef short				t_i16;
typedef int					t_i32;
typedef long long			t_i64;

typedef float				t_f32;
typedef double				t_f64;

typedef char *				t_cstr;

typedef struct s_ptr		*t_ptr;
typedef struct s_heap		*t_heap;

typedef enum e_res
{
	SUCCESS,
	FAIL
}	t_res;
# define RESULT t_res __attribute__((warn_unused_result))

typedef enum e_opt
{
	SOME,
	NONE
}	t_opt;
# define OPTION t_opt __attribute__((warn_unused_result))

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;
# define BOOL t_bool __attribute__((warn_unused_result))

void	error_log(t_cstr msg);
t_res	fail(t_cstr msg);
void	println(t_cstr msg);

#endif
