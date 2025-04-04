/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signed.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 10:59:32 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/28 13:06:02 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "num/num_len.h"
#include "math.h"

RESULT	string_push_signed(t_string *self, t_i64 number)
{
	t_u32	num_len;

	if (number == 0)
	{
		if (string_push_char(self, '0') == FAIL)
			return (fail(FNAME));
		return (SUCCESS);
	}
	num_len = num_len_base_signed(number, 10);
	if (string_cap_extend(self, num_len) == FAIL)
		return (fail(FNAME));
	if (number < 0)
	{
		self->chars[self->len++] = '-';
		num_len--;
	}
	self->len += num_len;
	num_len = self->len;
	while (number != 0)
	{
		self->chars[--num_len] = '0' + uabs(number % 10);
		number /= 10;
	}
	return (SUCCESS);
}
