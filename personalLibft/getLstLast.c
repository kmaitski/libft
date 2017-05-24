/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:13:44 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 18:15:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  getLstLast
 *  Description:  Returns the last node in a linked list pointed at by
 *  			  headNode.
 * =============================================================================
 */
lList	*getLstLast(lList *headNode) {
	lList	*node;

	node = headNode;
	while (node->next) {
		node = node->next;
	}
	return (node);
}		/* -----  end of function getLstLast  ----- */
