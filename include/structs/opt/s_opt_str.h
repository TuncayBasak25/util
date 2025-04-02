/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_opt_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:31:17 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/02 10:38:05 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_OPT_STR
# define S_OPT_STR

# include "structs/s_str.h"

typedef struct s_opt_str
{
	t_str	value;
	t_opt	option;
}			t_opt_str;

#endif