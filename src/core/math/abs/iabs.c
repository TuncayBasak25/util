/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 05:25:45 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/21 05:26:28 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

t_i64	iabs(t_i64 number)
{
	if (number < 0)
		return (-number);
	return (number);
}
