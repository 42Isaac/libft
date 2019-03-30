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
FILES		= libc/ft_memset.c \
libc/ft_bzero.c \
libc/ft_memcpy.c \
libc/ft_memccpy.c \
libc/ft_memmove.c \
libc/ft_memchr.c \
libc/ft_memcmp.c \
libc/ft_strlen.c \
libc/ft_strdup.c \
libc/ft_strcpy.c \
libc/ft_strncpy.c \
libc/ft_strcat.c \
libc/ft_strncat.c \
libc/ft_strlcat.c \
libc/ft_strchr.c \
libc/ft_strrchr.c \
libc/ft_strstr.c \
libc/ft_strnstr.c \
libc/ft_strcmp.c \
libc/ft_strncmp.c \
libc/ft_atoi.c \
libc/ft_isalpha.c \
libc/ft_isdigit.c \
libc/ft_isalnum.c \
libc/ft_isascii.c \
libc/ft_isprint.c \
libc/ft_toupper.c \
libc/ft_tolower.c \
\
additional/ft_memalloc.c \
additional/ft_memdel.c \
additional/ft_strnew.c \
additional/ft_strdel.c \
additional/ft_strclr.c \
additional/ft_striter.c \
additional/ft_striteri.c \
additional/ft_strmap.c \
additional/ft_strmapi.c \
additional/ft_strequ.c \
additional/ft_strnequ.c \
additional/ft_strsub.c \
additional/ft_strjoin.c \
additional/ft_strtrim.c \
additional/ft_strsplit.c \
additional/ft_itoa.c \
additional/ft_putchar.c \
additional/ft_putstr.c \
additional/ft_putendl.c \
additional/ft_putnbr.c \
additional/ft_putchar_fd.c \
additional/ft_putstr_fd.c \
additional/ft_putendl_fd.c \
additional/ft_putnbr_fd.c \
\
bonus/ft_lstnew.c \
bonus/ft_lstdelone.c \
bonus/ft_lstdel.c \
bonus/ft_lstadd.c \
bonus/ft_lstiter.c \
bonus/ft_lstmap.c \
\
personal/ft_wcount.c \
personal/ft_wordlen.c \
personal/ft_putarray.c \
personal/ft_arraynew.c \

OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%(OBJ): $(FILES)
	@gcc $(CFLAGS) $(FILES)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re