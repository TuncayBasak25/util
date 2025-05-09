/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_buff_char.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:50:06 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 16:13:56 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_BUFF_CHAR_H
# define S_BUFF_CHAR_H

# include "core.h"

typedef struct s_buff_char
{
	char	*cahrs;
	t_u32	len;
}			t_buff_char;

typedef struct s_slice_char
{
	char	*chars;
	t_u32	len;
}			t_view_char;

#endif