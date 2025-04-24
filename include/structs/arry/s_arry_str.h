/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_arry_str.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:07:36 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 08:25:13 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_ARRY_STR_H
# define S_ARRY_STR_H

# include "structs/s_str.h"

typedef struct s_arry_str
{
	t_str	*buff;
	t_u32	len;
	t_u32	cap;
}			t_arry_str;

#endif