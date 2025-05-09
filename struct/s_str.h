/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_str.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:07:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 15:48:14 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_STR_H
# define S_STR_H

# include "buff/s_buff_char.h"

typedef struct s_str
{
	t_buff_char	buff;
	t_u32		len;
}				t_str;

typedef struct s_lifetime
{
	t_bool	is_heap: 1;
	t_bool	is_shared: 1;
	t_bool	is_weak: 1;
	t_bool	is_strong: 1;
	t_u8	strong_count;
	t_u8	weak_count;
}			t_lifetime;

#endif