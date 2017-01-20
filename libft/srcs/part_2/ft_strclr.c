/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 10:09:59 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/20 11:39:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

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
