# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 15:47:36 by jlow              #+#    #+#              #
#    Updated: 2023/07/10 14:49:22 by jlow             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
cflags = -Wall -Wextra -Werror
CC = cc
RM = rm -f
ARCHIVE = ar -rcs
MAKE = make

SOURCES = ft_printf.c \
			print_char.c \
			print_string.c \
			print_pointer.c \
			print_decimal.c \
			print_unsigned_int.c \
			print_hexa_low.c \
			print_hexa_upper.c \
			

OBJECTS = $(SOURCES:.c=.o)

$(NAME) : $(OBJECTS)
	cd libft && $(MAKE)
	cp libft/libft.a $(NAME)
	$(ARCHIVE) $(NAME) $(OBJECTS)
	
all: $(NAME)

clean:
	cd libft && $(MAKE) clean
	$(RM)	$(OBJECTS)
	
fclean: clean
	cd libft && $(MAKE) fclean
	$(RM)	$(NAME)

re: fclean all

.PHONY: all clean fclean re