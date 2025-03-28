/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 11:44:37 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 11:49:31 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buffer.h"
#include "mem.h"
#include "math.h"
#include <stdlib.h>

RESULT	buffer_resize(void **ptr, t_u32 *size, t_u32 new_size)
{
	void	*new_ptr;

	if (new_size > 0)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (fail("buffer_resize: malloc fail!"));
	}
	else
		new_ptr = NULL;
	mem_copy(new_ptr, *ptr, umin(*size, new_size));
	if (*size > 0)
		free(*ptr);
	*ptr = new_ptr;
	*size = new_size;
	return (SUCCESS);
}
