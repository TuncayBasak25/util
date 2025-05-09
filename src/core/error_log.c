/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_log.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:51:58 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 12:14:12 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"
#include "cstring.h"
#include <unistd.h>

void	error_log(t_cstring message)
{
	write(2, message, cstring_len(message));
	write(2, "\n", 1);
}
