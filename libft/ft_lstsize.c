/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:04:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/15 22:33:36 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *head_node)
{
	size_t	count;
	t_list	*node;

	if (!head_node)
		return (0);
	count = 0;
	node = head_node;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
