/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bZero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:52:28 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 21:00:41 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  ftBZero
 *  Description:  Place n zero-valued bytes in the area pointed to by ptr.
 * =============================================================================
 */
void	ftBZero(void *ptr, size_t n) {
	char	*str;

	str = (char *)ptr;
	while (n--) {
		*str++ = 0;
	}
}		/* -----  end of function ftBZero  ----- */
