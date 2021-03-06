/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 08:43:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 23:24:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				*store;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			store = &tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = *store;
			i = 0;
		}
		i++;
	}
}
