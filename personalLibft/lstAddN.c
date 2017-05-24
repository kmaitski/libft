/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:32:55 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 17:44:09 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  lstAddN
 *  Description:  Adds a newNode to a linked list after matching the content
 *  			  parameter.
 * =============================================================================
 */
void	lstAddN(lList **list, lList *newNode, void *content) {
	lList	*node;
	lList	*storeNode;

	if (!newNode) {
		return ;
	}
	node = *list;
	while (node && node->content != content) {
		node = node->next;
	}
	if (node->content == content) {
		storeNode = node->next;
		node->next = newNode;
		newNode->next = storeNode;
	}
}		/* -----  end of function lstAddN  ----- */
