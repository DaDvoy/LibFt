# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 18:16:03 by lmushroo          #+#    #+#              #
#    Updated: 2020/11/24 23:52:42 by lmushroo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
ft_memmove.c ft_memset.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
ft_strdup.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c\
ft_putstr_fd.c ft_strmapi.c ft_strtrim.c ft_itoa.c ft_putnbr_fd.c ft_split.c\

BONUS_C_FILES = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

O_FILES_BONUS = $(BONUS_C_FILES:.c=.o)

O_FILES = $(C_FILES:.c=.o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):	$(O_FILES)
			ar -rcs $(NAME) $(O_FILES)

bonus:		$(O_FILES_BONUS) $(O_FILES)
			ar -rcs $(NAME) $(O_FILES_BONUS) $(O_FILES)

clean:
			$(RM) $(O_FILES) $(O_FILES_BONUS)

fclean:		clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
