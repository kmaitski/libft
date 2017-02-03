/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 09:05:17 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 15:42:25 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int	x;

	if (!s || !fd)
		return ;
	x = 0;
	while (s[x] != 0)
	{
		ft_putchar_fd(s[x], fd);
		x++;
	}
	ft_putchar_fd('\n', fd);
}
