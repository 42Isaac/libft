# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iperez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/29 13:02:20 by iperez            #+#    #+#              #
#    Updated: 2019/02/04 13:33:59 by iperez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra
FILES		= \
libc/*.c \
\
additional/*.c \
\
bonus/*.c \
\
personal/*.c \

OBJ			= $(FILES:%.c=%.o)

.PHONY: clean fclean all re

all: $(NAME)
	@rm -f libft.a
	@make libft.a

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%(OBJ): $(FILES)
	@gcc $(CFLAGS) $(FILES)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all