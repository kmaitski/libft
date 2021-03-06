/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:57:47 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/21 22:15:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **list, t_list *new_node)
{
	t_list	*node;

	if (!new_node)
		return ;
	node = *list;
	if (!node)
	{
		node = new_node;
		new_node->next = NULL;
	}
	else
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
}
