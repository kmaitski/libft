/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:03:24 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 22:02:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getNNode
 *  Description:  Returns the nth node in a list.
 * =============================================================================
 */
lList	*getNNode(lList *headNode, size_t nodeNumber) {
	unsigned int	nodeNumberCount = 0;
	lList			*node;

	if (!headNode) {
		return (NULL);
	}
	node = headNode;
	while ((size_t)nodeNumberCount++ < nodeNumber) {
		node = node->next;
	}
	return (node);
}		/* -----  end of function getNNode  ----- */
