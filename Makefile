NAME=libftprintf.a
cc= cc
CFLAGS= -Wall -Wextra -Werror

AF= ft_hexal.c	\
	ft_printf.c	\
	ft_putchar.c	\
	ft_putnbr.c	\
	ft_putnbr_u.c	\
	ft_putstr.c	\

HLB = $(AF:.c=.o)

all:	$(NAME)

$(NAME):	$(HLB)
	ar rc $(NAME) $(HLB)

$(HLB):	$(AF)
	$(cc) $(CFLAGS) -c $?

clean:
	rm -f $(HLB)

fclean: clean
	rm -f $(NAME)

re: fclean all
