/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:04:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/04/12 17:02:41 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *head_node)
{
	unsigned int	count;
	t_list			*node;

	count = 0;
	node = head_node;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
