/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:31:56 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/27 11:34:17 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array/array_string.h"

t_string	array_string_get(t_array_string *self, t_u32 index)
{
	t_string	string;

	if (index >= self->len)
		return ((t_string){0});
}
