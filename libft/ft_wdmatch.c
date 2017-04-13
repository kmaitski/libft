/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:47:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/12 17:47:32 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wdmatch(char *str1, char *str2)
{
	unsigned int	i;
	int				j;
	int				k;

	i = ft_strlen(str1);
	j = -1;
	k = -1;
	while (str1[++j])
	{
		while (str2[++k])
		{
			if (str1[j] == str2[k])
			{
				i--;
				break ;
			}
		}
	}
	if (i == 0)
		return (str1);
	else
		return (NULL);
}
