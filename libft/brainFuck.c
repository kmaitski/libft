/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainFuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:28:29 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/02 19:30:56 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	brainFuck(char *brainFuckPtr) {
	size_t 	i = 0;
	char	array[50000] = {0};
	char	*ptr = array;
	size_t	loop;


	while (brainFuckPtr[i]) {
		if (brainFuckPtr[i] == '>') {
			++ptr;
		}
		else if (brainFuckPtr[i] == '<') {
			--ptr;
		}
		else if (brainFuckPtr[i] == '+') {
			++*ptr;
		}
		else if (brainFuckPtr[i] == '-') {
			--*ptr;
		}
		else if (brainFuckPtr[i] == '.') {
			write(1, &*ptr, 1);
		}
		else if (brainFuckPtr[i] == ']' && *ptr) {
			loop = 1;
			while (loop > 0) {
				if (brainFuckPtr[--i] == ']') {
					++loop;
				}
				else if (brainFuckPtr[i] == '[') {
					--loop;
				}
			}
		}
		i++;
	}
}
