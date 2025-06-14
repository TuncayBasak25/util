/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   umin.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:50:51 by tbasak            #+#    #+#             */
/*   Updated: 2025/06/10 21:51:41 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

t_size	umin(t_size a, t_size b)
{
	if (a < b)
		return (a);
	return (b);
}
