/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 11:00:22 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/23 22:30:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  createNewMemoryArea
 *  Description:  Allocates and returns a “fresh” memory area. The memory 
 *  			  allocated is initialized to 0. If the allocation fails, the 
 *  			  function returns NULL.
 * =============================================================================
 */
void	*createNewMemoryArea(size_t sizeOfMemoryArea) {
	void	*newMemoryArea;

	if (!(newMemoryArea = (void *)malloc(sizeOfMemoryArea))) {
		return (NULL);
	}
	ft_memset(newMemoryArea, 0, sizeOfMemoryArea);
	return (newMemoryArea);
}	  /* -----  end of function createNewMemoryArea  ----- */

