# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 18:16:03 by lmushroo          #+#    #+#              #
#    Updated: 2020/11/16 21:59:07 by lmushroo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
ft_memmove.c ft_memset.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
ft_strdup.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putendl_fd.c\
ft_putstr_fd.c ft_strmapi.c 

BONUS_C_FILES = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(C_FILES:.c=.o)

B_OBJS = $(BONUS_C_FILES:.c=.o)

CC = gcc

RM = rm -f

C_FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean bonus re

all: $(NAME)

$(NAME):	$(OBJS)
	ar -rc	$(NAME) $(OBJS)
	ranlib	$(NAME)

bonus:		$(B_OBJS)
	ar -rc	$(NAME) $(B_OBJS)
	ranlib	$(NAME)
clean:
	@$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	-$(RM) $(NAME)

re: fclean all
