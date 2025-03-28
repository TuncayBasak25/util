/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:47:07 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 13:05:35 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

RESULT	string_push_char(t_string *self, char c)
{
	if (string_cap_extend(self, 1) == FAIL)
		return (fail(FNAME));
	self->chars[self->len++] = c;
	return (SUCCESS);
}
