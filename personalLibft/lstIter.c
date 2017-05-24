/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:54:03 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 18:08:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  lstIter
 *  Description:  Iterates the list lst and applies the function f to each link.
 * =============================================================================
 */
void	lstIter(lList *lst, void (*f)(lList *elm)) {
	lList	*node;

	if (!f) {
		return ;
	}
	node = lst;
	while (node) {
		f(node);
		node = node->next;
	}
}		/* -----  end of function lstIter  ----- */
