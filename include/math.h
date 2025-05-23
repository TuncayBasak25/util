/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 23:21:38 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 09:21:22 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include "core.h"

t_u64	uabs(t_i64 number);
t_i64	iabs(t_i64 number);

t_u64	umin(t_u64 a, t_u64 b);
t_u64	umax(t_u64 a, t_u64 b);

t_u64	nearest_greater_power_of_2(t_u64 value);


RESULT	u32_mul(t_u32 a, t_u32 b, t_u32 *out);

#endif