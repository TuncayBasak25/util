/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilen.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:42:11 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 16:13:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ILEN_H
# define ILEN_H

# include "s_ilen.h"

t_ilen
ilen(t_u32 index, t_u32 len);

t_ilen
range(t_u32 start, t_u32 end);

t_ilen
ilen_intersect(t_ilen a, t_ilen b);

t_ilen
ilen_union(t_ilen a, t_ilen b);

#endif