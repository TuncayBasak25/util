/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:13:19 by tbasak            #+#    #+#             */
/*   Updated: 2025/04/01 11:23:27 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_move(t_string *self, t_string *src)
{
	*self = *src;
	*src = (t_string){0};
}


typedef struct s_option_string
{
	t_string	value;
	OPTION		option;
}				t_option_string;

typedef struct s_option_string_ptr
{
	t_string	*ptr;
}				t_option_string_ptr;

t_option_string	none_string(void)
{
	return ((t_option_string){0});
}

t_option_string	some_string(t_string *string)
{
	return ((t_option_string){*string, SOME});
}

t_option_string_ptr	none_string_ptr(void)
{
	return ((t_option_string_ptr){0});
}

t_option_string_ptr	some_string_ptr(t_string *string)
{
	return ((t_option_string_ptr){string});
}

OPTION	move_string(t_string *self, t_option_string *src)
{
	if (src->option == NONE)
		return (NONE);
	*self = src->value;
	*src = none_string();
	return (SOME);
}

OPTION	move_string_ptr(t_string **ptr, t_option_string_ptr *src)
{
	if (src->ptr == 0)
		return (NONE);
	*ptr = src->ptr;
	src->ptr = 0;
	return (SOME);
}


RESULT	try_alloc_string(t_string **ptr)
{
	*ptr = (t_string *)malloc(sizeof(t_string));
	if (*ptr == NULL)
		return (fail(FNAME));
	*ptr = (t_string){0};
	return (SUCCESS);
}

RESULT	alloc_string(t_option_string_ptr *opt_ptr)
{
	if (try_alloc_string(&opt_ptr->ptr) == FAIL)
		return (fail(FNAME));
	return (SUCCESS);
}