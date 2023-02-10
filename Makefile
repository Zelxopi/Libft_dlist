# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 13:08:41 by mtrembla          #+#    #+#              #
#    Updated: 2023/02/10 13:48:18 by mtrembla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dlist.a

HEADER = dlist.h

SRCS = dlist_add_back.c \
		dlist_add_front.c \
		dlist_free.c \
		dlist_remove.c \
		dlist_view.c \

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar rc
RM = rm -f
OBJS = $(SRCS:.c=.o)

$(NAME): 
	@$(CC) $(CFLAGS) $(SRCS)
	@$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re:	fclean all

lib: all clean

.PHONY: all clean fclean re