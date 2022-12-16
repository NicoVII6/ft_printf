NAME = libftprintf.a

SRC = ft_printf.c ft_print_d_i.c \
		ft_print_ptr.c ft_print_str.c \
		ft_print_u.c ft_putchar.c ft_putnbr_hex.c \
		ft_putnbr_u.c ft_putnbr_X.c ft_putnbr.c \
		ft_putptr.c ft_putstr.c ft_print_char.c \
		ft_print_x.c ft_printX.c \

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS += -Wall -Wextra -Werror

AR = ar

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) -rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) -I. $(CFLAGS) -o $@ -c $?

.PHONY : clean fclean re

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all