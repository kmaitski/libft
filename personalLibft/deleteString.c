/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:08:43 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/07 19:59:14 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  deleteString
 *  Description:  Takes as a parameter addressOfAString that need to be 
 *  			  freed, then sets its pointer to NULL.
 * ==============================================================================
 */
void	deleteString(char **addressOfAString) {
	if (!addressOfAString) {
		return ;
	}
	free(*addressOfAString);
	*addressOfAString = NULL;
}	  /* -----  end of function deleteString  ----- */
