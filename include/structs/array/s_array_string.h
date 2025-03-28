/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_array_string.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:07:36 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 13:06:55 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_ARRAY_STRING_H
# define S_ARRAY_STRING_H

# include "structs/s_string.h"

typedef struct s_array_string
{
	t_string	*items;
	t_u32		len;
	t_u32		cap;
}				t_array_string;

#endif