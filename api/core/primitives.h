/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primitives.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:21:14 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 12:26:01 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIMITIVES_H
# define PRIMITIVES_H

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

typedef const char			*t_cstring;

typedef enum e_bool
{
	FALSE,
	TRUE,
}	t_bool;

typedef enum e_result
{
	OK,
	FAIL
}	t_result;

#endif