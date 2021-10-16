# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 19:57:55 by matrodri          #+#    #+#              #
#    Updated: 2021/09/28 14:55:48 by matrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

CC =		gcc
CFLAGS =	-Wall -Wextra -Werror -g

SRCS =		./mandatory/ft_printf.c \
			./convert_hex/ft_convert_hex.c \
			./convert_hex/ft_hexlen.c \
			./convert_hex/ft_atoh.c \
			./mini_libft/ft_callo.c \
			./mini_libft/ft_putchar.c \
			./mini_libft/ft_putnbr.c \
			./mini_libft/ft_putstr.c

OBJS =		$(SRCS:%.c=%.o)


all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
