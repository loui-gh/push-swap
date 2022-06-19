# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Loui :) <loflavel@students.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 06:36:23 by loflavel          #+#    #+#              #
#    Updated: 2022/04/06 15:40:10 by Loui :)          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = gcc

OBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o \
	ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_atoi.o \
	ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
	ft_calloc.o ft_strdup.o ft_striteri.o ft_substr.o ft_strjoin.o ft_strtrim.o	ft_split.o \
	ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o 	ft_putendl_fd.o ft_putnbr_fd.o \
	ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o	ft_lstadd_back.o \
	ft_lstdelone.o ft_lstclear.o

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
all: $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus