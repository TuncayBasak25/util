/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 09:10:16 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/27 10:52:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array/array_string.h"

void	array_string_destroy(t_array_string *self)
{
	if (array_string_cap_resize(self, 0) == FAIL)
		return ;
	*self = (t_array_string){0};
}
