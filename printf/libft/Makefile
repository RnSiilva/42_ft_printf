# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: resilva <resilva@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 21:48:40 by resilva           #+#    #+#              #
#    Updated: 2023/10/21 19:46:59 by resilva          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = libft.a

PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strdup.c ft_strchr.c \
			ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_bzero.c ft_calloc.c \
			ft_memset.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memcmp.c \
			ft_toupper.c ft_tolower.c ft_atoi.c

PART2 = ft_split.c ft_strjoin.c ft_strtrim.c ft_striteri.c ft_strmapi.c \
			ft_substr.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_itoa.c

BONUS = ft_lstsize.c ft_lstlast.c ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c \
			ft_lstiter.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c

SRC = ${PART1} ${PART2} ${BONUS}

OBJS = ${SRC:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .

.c.o:
			${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
			ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

.PHONY: 	all clean fclean re