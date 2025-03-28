/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:34:22 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 12:54:32 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "cstring.h"

RESULT	string_push_cstring(t_string *self, const char *cstring)
{
	if (string_push(self, cstring, cstring_len(cstring)) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}
