# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/14 17:38:29 by kmaitski          #+#    #+#              #
#    Updated: 2017/06/25 21:13:55 by kmaitski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = printCharacter.c printString.c getStringLength.c stringCompare.c clearString.c createNewMemoryArea.c memoryDelete.c\
      createNewString.c deleteString.c applyFunctionToString.c createNewStrByFun.c applyFunctionToStringAndIndex.c createNewStrByFuncI.c areStringsEqual.c\
      areStringsEquBytes.c ft_strsub.c joinTwoStrings.c ft_strtrim.c ft_strsplit.c itoa.c printNumber.c\
      writeStringWithNewLineToFd.c writeCharacterToFileDescriptor.c writeStringToFileDescriptor.c writeNumberToFileDescriptor.c writeStringWithNewLineToFd.c writeNumberToFileDescriptor.c\
	  memorySet.c bZero.c memoryCopy.c memoryCopyCharacter.c memoryMove.c memoryCharacterCheck.c memoryCompare.c\
	 duplicateString.c ft_strnstr.c stringCopy.c strCpyBytes.c searchStringForCharacter.c appendString.c appendStringBytes.c\
	  ft_strlcat.c ft_strchr.c ft_strstr.c strCmpBytes.c atoi.c isAlpha.c isDigit.c\
      isAlNum.c isAscii.c isPrint.c ft_toupper.c ft_tolower.c createNewNode.c\
      lstDelOne.c lstDel.c lstAdd.c lstIter.c changeList.c lstAddBack.c\
      getLstLast.c countList.c lstAddN.c getNNode.c ft_swap.c printReverseString.c\
	  searchAndReplace.c ft_ulstr.c findFirstWord.c findLastWord.c\
	  getMaxValue.c ft_wdmatch.c doOp.c printBits.c ft_strrev.c trimStrOneSpaceBetweenWords.c\
	  getHighestCommonDenominator.c printBits.c stringCapitalizer.c getAnArrayOfConsecutiveInts.c\
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
