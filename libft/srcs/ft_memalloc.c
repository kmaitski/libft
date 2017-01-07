/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 11:00:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/06 11:16:24 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	fresh = malloc(size);
	if (fresh == NULL)
		return (NULL);
	memset(fresh, 0, size);
	return (fresh);
}
