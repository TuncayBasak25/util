/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:05:31 by tbasak            #+#    #+#             */
/*   Updated: 2025/05/09 16:12:33 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

# include "core/primitives.h"
# include "ilen.h"

# define USE __attribute__((warn_unused_result))

void
assert(t_bool condition, t_cstring message);

void
error_log(t_cstring message);

#endif