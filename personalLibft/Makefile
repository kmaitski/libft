# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/14 17:38:29 by kmaitski          #+#    #+#              #
#    Updated: 2017/06/06 19:43:57 by kmaitski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = printCharacter.c printString.c ft_strlen.c ft_strcmp.c ft_strclr.c createNewMemoryArea.c memoryDelete.c\
      ft_strnew.c ft_strdel.c ft_striter.c ft_strmap.c ft_striteri.c ft_strmapi.c ft_strequ.c\
      ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c itoa.c printNumber.c\
      writeStringWithNewLineToFd.c writeCharacterToFileDescriptor.c writeStringToFileDescriptor.c writeNumberToFileDescriptor.c writeStringWithNewLineToFd.c writeNumberToFileDescriptor.c\
      memorySet.c bZero.c memoryCopy.c memoryCopyCharacter.c ft_memmove.c memoryCharacterCheck.c memoryCompare.c\
      ft_strdup.c ft_strnstr.c ft_strcpy.c ft_strncpy.c ft_strrchr.c ft_strcat.c ft_strncat.c\
	  ft_strlcat.c ft_strchr.c ft_strstr.c ft_strncmp.c atoi.c isAlpha.c isDigit.c\
      isAlNum.c isAscii.c isPrint.c ft_toupper.c ft_tolower.c createNewNode.c\
      lstDelOne.c lstDel.c lstAdd.c lstIter.c changeList.c lstAddBack.c\
      getLstLast.c countList.c lstAddN.c getNNode.c ft_swap.c printReverseString.c\
	  ft_search_and_replace.c ft_ulstr.c findFirstWord.c findLastWord.c\
	  getMaxValue.c ft_wdmatch.c doOp.c printBits.c ft_strrev.c trimStrOneSpaceBetweenWords.c\
	  getHighestCommonDenominator.c printBits.c ft_str_capitalizer.c getAnArrayOfConsecutiveInts.c\
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
