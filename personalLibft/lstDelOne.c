/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:05:07 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 18:04:23 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  lstDelOne
 *  Description:  Takes as a parameter a link’s pointer address and frees the
 *  			  memory of the link’s content using the function del given as a
 *  			  parameter, then frees the link’s memory. The memory of next
 *  			  musnt not be freed under any circumstance. Finally, the
 *  			  pointer to the link that was just freed must be set to NULL.
 * =============================================================================
 */
void	lstDelOne(lList **aLst, void (*del)(void *, size_t)) {
	t_list	*node;

	if (!aLst || !del) {
		return ;
	}
	node = *aLst;
	del(node->content, node->contentSize);
	*aLst = NULL;
}		/* -----  end of function lstDelOne  ----- */
