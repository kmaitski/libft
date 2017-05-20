# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/14 17:38:29 by kmaitski          #+#    #+#              #
#    Updated: 2017/05/19 20:57:03 by kmaitski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_strclr.c ft_memalloc.c ft_memdel.c\
      ft_strnew.c ft_strdel.c ft_striter.c ft_strmap.c ft_striteri.c ft_strmapi.c ft_strequ.c\
      ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c itoa.c ft_putnbr.c\
      ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
      ft_memset.c bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c\
      ft_strdup.c ft_strnstr.c ft_strcpy.c ft_strncpy.c ft_strrchr.c ft_strcat.c ft_strncat.c\
	  ft_strlcat.c ft_strchr.c ft_strstr.c ft_strncmp.c atoi.c isAlpha.c isDigit.c\
      isAlNum.c isAscii.c isPrint.c ft_toupper.c ft_tolower.c ft_lstnew.c\
      ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstaddback.c\
      ft_lstlast.c ft_lstsize.c ft_lstaddn.c ft_lstn.c ft_swap.c ft_rev_print.c\
	  ft_search_and_replace.c ft_ulstr.c firstWord.c ft_last_word.c\
	  ft_max.c ft_wdmatch.c doOp.c ft_print_bits.c ft_strrev.c epurStr.c\
	  ft_pgcd.c ft_print_bits.c ft_str_capitalizer.c ft_range.c ft_reverse_bits.c\
	  atoiBase.c revWstr.c sortIntTab.c

OFILES = $(SRC:.c=.o)

CC = gcc -c

FLAGS = -Wall -Wextra -Werror

INC = -Iincludes

AR = ar rc

RUN = ranlib

DEL = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) $(INC)
	$(AR) $(NAME) $(OFILES)
	$(RUN) $(NAME)

clean:
	$(DEL) $(OFILES)

fclean: clean
		$(DEL) $(NAME)

re: fclean all

.PHONY: fclean clean re
