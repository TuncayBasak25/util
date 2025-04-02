/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_slc_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:07:36 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/02 12:20:43 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_SLC_STR_H
# define S_SLC_STR_H

# include "structs/s_str.h"

typedef struct s_slc_str
{
	t_str	*buff;
	t_u64	len;
}			t_slc_str;

#endif