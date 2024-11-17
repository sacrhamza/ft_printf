/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:00:54 by hsacr             #+#    #+#             */
/*   Updated: 2024/11/14 10:37:00 by hsacr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fn_printf.h"

int	fn_putnbr(int number)
{
	char	*ptr;
	int		len;

	ptr = fn_itoa(number);
	len = fn_putstr(ptr);
	free(ptr);
	return (len);
}
