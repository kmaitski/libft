/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 10:09:59 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:22:17 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	x;

	x = 0;
	if (s == NULL)
		return ;
	while (s[x] != '\0')
	{
		s[x] = '\0';
		x++;
	}
}