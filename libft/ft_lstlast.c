/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:13:44 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/15 15:03:24 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *head_node)
{
	t_list	*node;

	if (!head_node)
		return (NULL);
	node = head_node;
	while (node->next)
		node = node->next;
	return (node);
}
