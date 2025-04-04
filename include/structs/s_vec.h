/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_vec.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:25:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/02 11:51:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VEC_H
# define S_VEC_H

# include "core.h"

typedef struct s_vec
{
	void	*buff;
	t_u32	len;
	t_u32	cap;
}			t_vec;

#endif