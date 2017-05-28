/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 13:38:24 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/27 20:37:11 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  memoryDelete
 *  Description:  Takes as a parameter the addressOfAMemoryAreaPtr that needs 
 *  			  to be freed, then puts the pointer to NULL.
 * =============================================================================
 */

void	memoryDelete(void **addressOfAMemoryAreaPtr)
{
	if (!ap)
		return ;
	free(*ap);
	*ap = NULL;
}	  /* -----  end of function ft_memdel  ----- */
