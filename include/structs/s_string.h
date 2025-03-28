/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 07:27:42 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 11:37:20 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_STRING_H
# define S_STRING_H

# include "core.h"

typedef struct s_string
{
	char	*chars;
	t_u32	len;
	t_u32	cap;
}			t_string;

#endif