/*
 * =================================================================================
 *
 *       Filename:  atoiMain.c
 *
 *    Description:  Driver for atoi testing for overflow and underflow
 *
 *        Version:  1.0
 *        Created:  06/02/2017 18:36:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kevin Maitski (KM), kevin.maitski@gmail.com
 *   Organization:  42
 *
 * =================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"

/* 
 * ===  FUNCTION  ==================================================================
 *         Name:  main
 *  Description:  Driver for testing atoi overflow and underflow
 * =================================================================================
 */
int	main(void)
{
	const char *str = "945";
//	const char *str = ("-2147483648");
	printf("The atoi result is: %d\n", atoi(str));
	printf("You atoi result is: %d\n", ft_atoi(str));
}				/* ----------  end of function main  ---------- */
