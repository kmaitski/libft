/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:03:24 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/21 22:21:15 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstn(t_list *head_node, size_t n)
{
	unsigned int	count;
	t_list			*node;

	if (!head_node)
		return (NULL);
	count = 1;
	node = head_node;
	while ((size_t)count++ < n)
		node = node->next;
	return (node);
}
