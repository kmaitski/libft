/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 16:41:00 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/27 20:37:21 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

/*
 *	Linked list structure
 */

typedef struct		kList
{
	void			*content;
	size_t			contentSize;
	struct kList	*next;
}					lList;

/*
 *	Write functions
 */

void				printCharacter(wchar_t character);
void				writeCharacterToFileDescriptor(char character, int
		fileDescriptor);
void				printString(char const *stringPtr);
void				writeStringToFileDescriptor(char const *stringPtr, int
		fileDescriptor);
void				printNumber(int number);
void				writeNumberToFileDescriptor(int number, int fileDescriptor);
void				printStringWithNewLine(char const *stringPtr);
void				writeStringWithNewLineToFd(char const *stringPtr, int
		fileDescriptor);
void				printReverseString(char *stringPtr);
void				printBits(unsigned char byte);

/*
 * 	String comparison functions
 */

int					stringCompare(const char *string1Ptr, const char *string2Ptr);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					areStringsEqual(char const *string1Ptr, char const *string2Ptr);
int					ft_strnequ(char const *s1, char const *s2, size_t n);

/*
 * 	String manipulation functions
 */

void				clearString(char *stringPtr);
void				applyFunctionToString(char *stringPtr, void (*f)(char *));
void				applyFunctionToStringAndIndex(char *stringPtr, void
		(*f)(unsigned int, char *));
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t				ft_strlen(char const *str);
char				*stringCopy(char *destinationStringPtr, const char
		*sourceStringPtr);
char				*searchStringForCharacter(const char *stringPtr, int character);
char				*ft_strrchr(const char *str, int c);
char				*appendString(char *destinationStringPtr, const char
		*sourceStringPtr);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
int					ftAtoi(const char *STR);
char				*searchAndReplace(char *stringPtr, char badCharacter, char
		replacementCharacter);
char				*ft_ulstr(char *str);
char				*ft_wdmatch(char *str1, char *str2);
char				*ft_strrev(char *str);
char				*stringCapitalizer(char *str);
int					atoiBase(const char *STR, int strBase);
char				*revWstr(char *str);


/* 
 * 	Allocate memory for new string functions
 */

char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*joinStrings(char const *string1Ptr, char const *string2Ptr);
char				*itoa(int nbr);
char				*duplicateString(const char *stringPtr);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);
char				*trimStrOneSpaceBetweenWords(char *str);
char				*findFirstWord(char *str);
char				*findLastword(char *str);

/*
 *	Memory allocation functions
 */

void				*createNewMemoryArea(size_t sizeOfMemoryArea);

/*
 * 	Memory manipulation functions
 */

void				*memorySet(void *memoryAreaPtr, int character, size_t nbrOfCharacters);
void				ftBZero(void *ptr, size_t n);
void				*memoryCharacterCheck(const void *STRINGPTR, int character, size_t nbrOfBytes);
int					memoryCompare(const void *MEMORYAREA1PTR, const void *MEMORYAREA2PTR, size_t nbrOfBytes);

/*
 * 	Memory copy functions
 */

void				*memoryCopy(void *memoryArea1Ptr, const void *MEMORYAREA2PTR, size_t nbrOfCharacters);
void				*memoryCharacterCopy(void *destinationAreaPtr, const void *SOURCEAREAPTR, int character, size_t nbrOfBytes);
void				*memoryMove(void *destinationMemoryAreaPtr, const void
		*sourceMemoryAreaPtr, size_t nbrOfBytes);

/* 
 * 	Free functions
 */

void				memoryDelele(void **addressOfAMemoryAreaPtr);
void				deleteString(char **addressOfAString);

/*
 * 	Is functions
 */

int					ftIsAlpha(char character);
int					ftIsDigit(char character);
int					ftIsAlNum(char character);
int					ftIsAscii(char character);
int					ftIsPrint(char character);

/* 
 * 	Character manipulation functions
 */

int					ft_toupper(int c);
int					ft_tolower(int c);

/* 
 * 	Int manipulation functions
 */

void				ft_swap(int *a, int *b);
int					getMaxValue(int *arrayOfInts, unsigned int len);
int					doOp(int number1, char sign, int number2);
int					getCommonHighestDenominator(unsigned int firstNumber, unsigned
		int secondNumber);
int					*getAnArrayOfConsecutiveInts(int startingInt, int endingInt);
int					sortIntTab(int *tab, unsigned int size);

/* 
 * 	Linked list manipulation functions
 */

lList				*createNewNode(void const *CONTENT, size_t contentSize);
void				lstDelOne(lList **aLst, void (*del)(void *, size_t));
void				lstDel(lList **aLst, void (*del)(void *, size_t));
void				lstIter(lList *lst, void (*f)(lList *elem));
lList				*changeList(lList *lst, lList *(*f)(lList *elem));
lList				*getLstLast(lList *headNode);
unsigned int		countList(lList *headNode);
lList				*getNNode(lList *headNode, size_t nodeNumber);

/*
 * 	Linked list add nodes functions
 */

void				lstAdd(lList **aLst, lList *newNode);
void				lstAddBack(lList **list, lList *newNode);
void				lstAddN(lList **list, lList *newNode, void *content);

#endif
