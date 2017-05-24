/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:57:08 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 18:21:19 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  changeList
 *  Description:  Iterates a list lst and applies the function f to each link to
 *  			  create a “fresh” list resulting from the successive
 *  			  applications of f. If the allocation fails, the function
 *  			  returns NULL.
 * =============================================================================
 */
lList	*chageList(lList *lst, lList *(*f)(lList *elem)) {
	lList	*newHead;
	lList	*freshNode;
	lList	*node;

	if (!lst || !f) {
		return (NULL);
	}
	node = lst;
	freshNode = f(node);
	newHead = freshNode;
	while (node->next) {
		node = node->next;
		freshNode->next = f(node);
		freshNode = freshNode->next;
	}
	return (newHead);
}		/* -----  end of function changeList  ----- */
