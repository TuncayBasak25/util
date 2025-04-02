/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_vec_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:25:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/02 10:29:13 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VEC_STR_H
# define S_VEC_STR_H

# include "structs/s_str.h"

typedef struct s_vec_str
{
	t_str	*buff;
	t_u32	len;
	t_u32	cap;
}			t_vec_str;

#endif