/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:01:00 by hsacr             #+#    #+#             */
/*   Updated: 2024/11/14 10:37:12 by hsacr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fn_printf.h"

int	fn_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (write(1, "(null)", 6));
	while (*(str + i))
		write(1, str + i++, 1);
	return (i);
}