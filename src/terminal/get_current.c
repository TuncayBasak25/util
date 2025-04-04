/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_current.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 08:04:56 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/21 08:47:31 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "terminal.h"
#include "fd.h"
#include <termios.h>

RESULT	term_get_current(t_termios **current)
{
	static t_termios	current_state = (t_termios){0};
	static t_bool		setled = FALSE;
	t_termios			*original;

	*current = &current_state;
	if (setled)
		return (SUCCESS);
	if (term_get_original(&original) == FAIL)
		return (fail(FNAME));
	current_state = *original;
	setled = TRUE;
	return (SUCCESS);
}
