/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:41:02 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 13:05:56 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

RESULT	string_push_string(t_string *self, t_string *other)
{
	if (string_push(self, other->chars, other->len) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
