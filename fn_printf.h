#ifndef FN_PRINTF_H
# define FN_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		fn_putchar(char c);
int		fn_putstr(char *str);
char	*fn_itoa(int n);
int		fn_putnbr(int number);
int		fn_tolower(int c);
int		fn_toupper(int c);
int		fn_puthex(unsigned int n, int (*f)(int));
int		fn_puthexptr(size_t n, int (*f)(int));
int		fn_putus(unsigned int	n);
int		fn_putptr(void *pointer);
int		fn_global(char c, va_list args);
int		ft_printf(char *str, ...);
#endif
