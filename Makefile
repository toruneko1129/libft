NAME	= libft.a
SRCS	= ft_memset.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAG	= -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rcs $@ $<

%.o: %.c
	$(CC) -o $@ -c $(CFLAG) $<

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
