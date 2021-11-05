# ************************************************************ #
#                                                              #
#             ╓▀▀▀▀▀▀▄                 :::      ::::::::       #
#            █▀      ▐               :+:      :+:    :+:       #
#            █   ▀   ▓█            +:+ +:+         +:+         #
#            █      █▓▓▓▓█       +#+  +:+       +#+            #
#    ▄▄ ▄▄▄███████─▄▀█▀▀       +#+#+#+#+#+   +#+               #
#    █ ███████████▄██ ██             #+#    #+#                #
#    █  █▀▀   ██████████▌           ###   ########.fr          #
#    █  ▀▄▄    ▀████████▌                                      #
#     ▀█   ▀ ▄▄▄████████▌      42cursus | MCoscia | matrodri   #
#        ▀▀  ▄▄▄▄▄▄▄▄▄█▀       quack quack |  vila pescopata   #
#                                                              #
# ************************************************************ #

NAME =		libftprintf.a

CC =		gcc
CFLAGS =	-Wall -Wextra -Werror -g

SRCS =		./mandatory/ft_printf.c \
			./convert_hex/ft_convert_hex.c \
			./convert_hex/ft_hexlen.c \
			./convert_hex/ft_itoh.c \
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
