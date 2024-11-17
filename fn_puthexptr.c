/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:00:51 by hsacr             #+#    #+#             */
/*   Updated: 2024/11/14 11:10:31 by hsacr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fn_printf.h"

int	fn_puthexptr(size_t n, int (*f)(int))
{
	int		length;
	char	ch_number;
	char	*numbers;

	numbers = "0123456789abcdef";
	length = 0;
	if (n >= 16)
	{
		ch_number = f(*(numbers + (n % 16)));
		length += fn_puthexptr(n / 16, f);
		n -= (n % 16);
		length += fn_putchar(ch_number);
	}
	if (n < 16)
		length += fn_putchar(f(*(numbers + n)));
	return (length);
}
