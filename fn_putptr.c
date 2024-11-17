/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:00:57 by hsacr             #+#    #+#             */
/*   Updated: 2024/11/14 11:07:25 by hsacr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fn_printf.h"

int	fn_putptr(void *pointer)
{
	size_t	ptr;
	int		length;

	ptr = (size_t)pointer;
	length = fn_putstr("0x");
	length += fn_puthexptr(ptr, fn_tolower);
	return (length);
}
