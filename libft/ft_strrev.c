/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:48:20 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 08:05:33 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int				i;
	int				j;
	char			k;

	i = ft_strlen(str);
	j = -1;
	while (++j < --i)
	{
		k = str[j];
		str[j] = str[i];
		str[i] = k;
	}
	return (str);
}
