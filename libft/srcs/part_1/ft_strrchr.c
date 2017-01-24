/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 23:47:23 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/19 23:47:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		f;
	int		co;
	char	*s;

	f = 0;
	co = 0;
	while (str[co] != '\0')
	{
		if (str[co] == c)
		{
			s = &str[co];
			f = 1;
			while (str[co] != '\0')
			{
				if (str[co] == c)
				{ 
					s = &str[co];
					break ;
				}
				co++;
			}
		}
		co++;
	}
	if (f == 1)
		return (s);
	s = NULL;
	return (s);
}
