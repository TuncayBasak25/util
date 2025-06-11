/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 05:32:33 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 21:19:40 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# define FNAME __func__
# define USE __attribute__((warn_unused_result))

typedef unsigned char		t_u8;
typedef unsigned short		t_u16;
typedef unsigned int		t_u32;
typedef unsigned long long	t_u64;
typedef unsigned long long	t_size;

typedef char				t_i8;
typedef short				t_i16;
typedef int					t_i32;
typedef long long			t_i64;
typedef long long			t_isize;

typedef float				t_f32;
typedef double				t_f64;

typedef enum e_res
{
	SUCCESS,
	FAIL
}	t_res;

typedef enum e_opt
{
	SOME,
	NONE
}	t_opt;

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

#endif