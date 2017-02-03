/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 18:27:54 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/03 13:47:28 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	x;

	if (!s || (!start && !len))
		return (NULL);
	new = malloc(len + 1);
	if (new == NULL)
		return (0);
	x = 0;
	while (x < len)
	{
		new[x] = s[start];
		x++;
		start++;
	}
	new[x] = '\0';
	return (new);
}

int	main(void)
{
	static char	*str = "Un jour je serai, le meilleur dresseur !";
	printf("%d", strcmp(ft_strsub(str, 0, 0), ""));
	return (0);
}
