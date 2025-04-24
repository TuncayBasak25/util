/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 08:52:12 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 09:08:11 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"
#include <stdint.h>

RESULT	u32_mul(t_u32 a, t_u32 b, t_u32 *out)
{
	t_u64	result;

	result = a * b;
	if (result > UINT32_MAX)
		return (fail("Integer overflow!"));
	*out = result;
	return (SUCCESS);
}
