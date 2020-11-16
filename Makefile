# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 18:16:03 by lmushroo          #+#    #+#              #
#    Updated: 2020/11/16 07:58:33 by lmushroo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
ft_memmove.c ft_memset.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
ft_strdup.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c\
ft_putstr_fd.c ft_putnbr_fd.c ft_strmapi.c ft_lstnew.c

BONUS_C_FILES = 

ifdef COMPILE_BONUS
	O_FILES = $(C_FILES:.c=.o) $(BONUS_C_FILES:.c=.o)
else
	O_FILES = $(C_FILES:.c=.o)
endif

HEADER = libft.h

.PHONY: all clean fclean bonus re

all: $(NAME)

$(NAME): $(O_FILES)
	ar -rcs $(NAME) $(O_FILES)

%.o: %.c $(HEADER)
	gcc -Wall -Werror -Wextra -c $<

bonus:
	$(MAKE) COMPILE_BONUS=1 all

clean:
	@rm -f $(O_FILES) $(BONUS_C_FILES:.c=.o)

fclean: clean
	-rm -f $(NAME)

re: fclean all
