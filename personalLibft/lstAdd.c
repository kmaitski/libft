/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:45:05 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 21:38:42 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  lstAdd
 *  Description:  Adds the element newNode at the beginnning of the list.
 * =============================================================================
 */
void	lstAdd(lList **aLst, lList *newNode) {
	lList	*oldHead;

	if (!newNode) {
		return ;
	}
	oldHead = *aLst;
	if (!aLst) {
		*aLst = newNode;
		newNode->next = NULL;
	}
	else {
		*aLst = newNode;
		newNode->next = oldHead;
	}
}		/* -----  end of function lstAdd  ----- */
