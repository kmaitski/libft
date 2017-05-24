/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:35:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 17:57:14 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  lstDel
 *  Description:  Takes as a parameter the adress of a pointer to a link and
 *  			  frees the memory of this link and every successors of that
 *  			  link. Finally the pointer to the link that was just freed must
 *  			  be set to NULL.
 * =============================================================================
 */
void	lstDel(lList **aLst, void (*del)(void *, size_t)) {
	t_list	*node;
	t_list	*nextNode;

	if (!del) {
		return ;
	}
	node = *aLst;
	while (node) {
		nextNode = node->next;
		del(node->content, node->contentSize);
		free(node);
		node = nextNode;
	}
	*alst = NULL;
}		/* -----  end of function lstDel  ----- */
