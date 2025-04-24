/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:27:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/09 09:34:11 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arry/arry_str.h"

OPTION	arry_str_pop(t_arry_str *self, t_str *out)
{
	if (self->len == 0)
		return (NONE);
	*out = self->buff[--self->len];
	return (SOME);
}
