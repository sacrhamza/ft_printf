/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsacr <hsacr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:35:53 by hsacr             #+#    #+#             */
/*   Updated: 2024/11/25 00:36:10 by hsacr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FN_PRINTF_H
# define FN_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		fn_putchar(char c, int *error);
int		fn_putstr(char *str, int *error);
char	*fn_itoa(int n);
int		fn_putnbr(int number, int *error);
int		fn_tolower(int c);
int		fn_toupper(int c);
int		fn_puthex(unsigned int n, int (*f)(int), int *error);
int		fn_puthexptr(size_t n, int (*f)(int), int *error);
int		fn_putus(unsigned int n, int *error);
int		fn_putptr(void *pointer, int *error);
int		fn_global(char c, va_list args, int *error);
int		ft_printf(char *str, ...);
#endif
