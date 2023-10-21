# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resilva <resilva@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 22:01:44 by resilva           #+#    #+#              #
#    Updated: 2023/10/20 23:02:58 by resilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_print_char.c ft_print_str.c ft_print_ptr.c ft_print_nbr.c \
				ft_print_unsigned.c ft_print_hex.c ft_print_perc.c

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
MAKE = make -C
LIBFT_PATH = libft
LIBFT = ${LIBFT_PATH}/libft.a

.c.o:
				${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
				${MAKE} ${LIBFT_PATH} all
				cp ${LIBFT} ${NAME}
				ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
				${MAKE} ${LIBFT_PATH} clean
				${RM} ${OBJS}

fclean: 	clean
				${MAKE} ${LIBFT_PATH} fclean
				${RM} ${NAME}

re: 		fclean all

.PHONY: 	all clean fclean re