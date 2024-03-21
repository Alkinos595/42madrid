# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 12:15:55 by afoinqui          #+#    #+#              #
#    Updated: 2024/03/18 12:15:57 by afoinqui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -rf
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
OBJS =	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all

.PHONY: all clean fclean re