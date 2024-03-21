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
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = libft.h
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJS =	$(SRC:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all

.PHONY: all clean fclean re main