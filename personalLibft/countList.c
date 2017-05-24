/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:04:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 22:17:45 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  countList
 *  Description:  Counts the nodes in a linked list pointed to by headNode.
 * =============================================================================
 */
unsigned int	countList(lList *headNode) {
	unsigned int	listSize;
	lList			*node;

	listSize = 0;
	node = headNode;
	while (node) {
		listSize++;
		node = node->next;
	}
	return (listSize);
}		/* -----  end of function countList  ----- */
