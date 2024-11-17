/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:00:51 by hsacr             #+#    #+#             */
/*   Updated: 2024/11/14 10:36:53 by hsacr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fn_printf.h"

int	fn_puthex(unsigned int n, int (*f)(int))
{
	int		length;
	char	ch_number;
	char	*numbers;

	numbers = "0123456789abcdef";
	length = 0;
	if (n >= 16)
	{
		ch_number = f(*(numbers + (n % 16)));
		length += fn_puthex(n / 16, f);
		n -= (n % 16);
		length += fn_putchar(ch_number);
	}
	if (n < 16)
		length += fn_putchar(f(*(numbers + n)));
	return (length);
}
