/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:57:47 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 21:45:19 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  lstAddBack
 *  Description:  Adds a newNode to the end of a linked list list.
 * =============================================================================
 */
void	lstAddBack(lList **list, lList *newNode) {
	t_list	*node;

	if (!newNode) {
		return ;
	}
	node = *list;
	if (!node) {
		node = newNode;
		newNode->next = NULL;
	}
	else
	{
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
}		/* -----  end of function lstAddBack  ----- */
