/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 13:58:48 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:46:47 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	x;

	fresh = malloc(size + 1);
	if (fresh == NULL)
		return (NULL);
	x = 0;
	while (x <= size)
	{
		fresh[x] = '\0';
		x++;
	}
	return (fresh);
}
