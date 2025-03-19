/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:03:31 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/18 23:22:35 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTRING_H
# define CSTRING_H

# include "core.h"

void	cstring_non_null(const char **cstring);
t_u64	cstring_len(const char *cstring);

#endif