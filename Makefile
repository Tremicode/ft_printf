NAME =	libftprintf.a

CFLAGS = -Wall -Werror -Wextra
CC = gcc
REMOVE = rm -f
AR = ar
SRCS = ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_ptr_print.c \
		ft_putnbr_hex_print.c \
		ft_putnbr_unsig.c \
		ft_putnbrma_hex_print.c


OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
		$(AR) -crs $@ $^

all: $(NAME)

%.o : %.c
		@$(CC) -c $(CFLAGS) $< -o $@


clean:
		$(REMOVE) $(OBJS)
fclean: clean
		$(REMOVE) $(NAME)
re:	fclean all

.PHONY	: all clean fclean re