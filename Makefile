NAME = push_swap
LIBFT = ./libft/libft.a
CFLAGS = -Wall -Wextra 
CC = gcc
HEADERS = push_swap.h
SRC = main.c atoi_mod.c rules1.c rules2.c rules3.c \
		error_handling.c utils1.c utils2.c utils3.c \
		big_stack.c small_stack.c index.c
		
OBJ = ${SRC:.c=.o}

$(NAME): $(OBJ) 
	cd libft && $(MAKE) all
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

clean:
	cd libft && $(MAKE) clean
	rm -f $(OBJ)

fclean: clean
	cd libft && $(MAKE) fclean
	rm -f $(NAME)
	
all: $(NAME)

re: fclean all

.PHONY: all clean fclean re
