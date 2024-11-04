# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielpe <danielpe@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 14:44:24 by danielpe          #+#    #+#              #
#    Updated: 2024/11/03 21:56:56 by danielpe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_atoi.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strnstr.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_striteri.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
						
MANDATORY_OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MANDATORY_OBJS)
		ar rcs $@ $^
		
%.o: %.c libft.h
		$(CC) $(CFLAGS) -c $< -o $@
		
clean:
		rm -f $(MANDATORY_OBJS) 
		
fclean: clean
		rm -f $(NAME)
		
re: fclean all

.PHONY: all clean re 