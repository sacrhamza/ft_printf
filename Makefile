COMMAND := cc -c -Wall -Werror -Wextra

OBJECTS := fn_itoa.o fn_putchar.o fn_puthex.o fn_putnbr.o fn_putptr.o fn_putstr.o fn_tolower.o fn_toupper.o fn_printf.o fn_global.o fn_puthexptr.o fn_putus.o

NAME = libftprintf.a

all: ${NAME}

HEADER = fn_printf.h

${NAME}: ${OBJECTS}
	ar rcs $@ $^

%.o: %.c fn_printf.h
	${COMMAND} $<

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}
re: fclean printf.a

