# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thrio <thrio@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 11:14:21 by thrio             #+#    #+#              #
#    Updated: 2022/09/09 12:00:05 by thrio            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c

SRCS2	= main.c

OBJS	= ${SRCS:.c=.o} ${SRCS2:.c=.o}

NAME	= libft

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} :	${OBJS}
		ar rc libft.a ${OBJS}
		${CC} -o ${NAME} main.o -L. -lft

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

norminette:
		norminette ${SRCS}

aclean:		norminette all clean

.PHONY:		all clean fclean re aclean norminette
