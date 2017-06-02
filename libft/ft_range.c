/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 14:41:12 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/26 14:25:14 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_range(int start, int end)
{
	unsigned int	range;

	range = 0;
	if (start > end)
		range = start - end + 1;
	else
		range = end - start + 1;
	return (range);
}

int					*ft_range(int start, int end)
{
	unsigned int	range;
	int				*array;
	unsigned int	i;

	i = 0;
	range = get_range(start, end);
	if (!(array = (int *)malloc(sizeof(int) * range)))
		return (NULL);
	if (range == 1)
		array[0] = start;
	else if (start > end)
		while (i < range)
			array[i++] = start--;
	else if (end > start)
		while (i < range)
			array[i++] = start++;
	return (array);
}
