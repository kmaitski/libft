/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:46:35 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/21 22:09:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_first_word(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i] < 33 && str[i])
		i++;
	if (!str[i])
		return (NULL);
	j = i;
	while (str[j] > 32 && str[j])
		j++;
	return (ft_strsub(str, i, j - i));
}
