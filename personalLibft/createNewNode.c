/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:49:45 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 22:13:18 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  createNewNode
 *  Description:  Allocates and returns a “fresh” link. The variables content
 *  			  and content_size of the new link are initialized by copy of
 *  			  the parameters of the function. If the parameter content is
 *  			  null, the variable content is initialized to NULL and the
 *  			  variable content_size is initialized to 0 even if the
 *  			  parameter content_size isn’t. The variable next is initialized
 *  			  to NULL. If the allocation fails, the function returns NULL.
 * =============================================================================
 */
lList	*createNewNode(void const *CONTENT, size_t contentSize) {
	lList	*node;

	if (!(node = (lList *)malloc(sizeof(lList)))) {
		return (NULL);
	}
	if (!CONTENT) {
		node->content = NULL;
		node->contentSize = 0;
	}
	else {
		if (!(node->content = (void *)malloc(contentSize)))
			return (NULL);
		ft_memcpy(node->content, CONTENT, contentSize);
		node->contentSize = contentSize;
	}
	node->next = NULL;
	return (node);
}		/* -----  end of function createNewNode  ----- */
