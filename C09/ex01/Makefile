# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/11 10:46:15 by aghlimi           #+#    #+#              #
#    Updated: 2024/07/15 10:29:02 by aghlimi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
FLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes/ft.h
LIB = libft.a
AR = ar rcs
all:
	find ${SRCDIR} -type f -name "ft_*.c" -exec ${CC} ${FLAGS} -c {} -o '{}:.c=.o' \;
	${AR} ${LIB} ft_*.o
clean:
	rm ft_*.o
fclean:
	rm ${LIB}
run:
	${CC} main.c ${LIB}
re: fclean all