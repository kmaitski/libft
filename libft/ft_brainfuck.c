/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brainfuck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:28:29 by kmaitski          #+#    #+#             */
/*   Updated: 2017/06/06 21:15:37 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	brainfuckalgo(char *ptr, size_t loop, char *brain_fuck_ptr, int i)
{
	while (brain_fuck_ptr[i++])
	{
		if (brain_fuck_ptr[i] == '>')
			++ptr;
		else if (brain_fuck_ptr[i] == '<')
			--ptr;
		else if (brain_fuck_ptr[i] == '+')
			++*ptr;
		else if (brain_fuck_ptr[i] == '-')
			--*ptr;
		else if (brain_fuck_ptr[i] == '.')
			write(1, &*ptr, 1);
		else if (brain_fuck_ptr[i] == ']' && *ptr)
		{
			loop = 1;
			while (loop > 0)
			{
				if (brain_fuck_ptr[--i] == ']')
					++loop;
				else if (brain_fuck_ptr[i] == '[')
					--loop;
			}
		}
	}
}

void		ft_brainfuck(char *brain_fuck_ptr)
{
	char	array[50000];
	char	*ptr;
	size_t	loop;
	int		i;

	i = 0;
	while (i < 50000)
		array[i++] = '\0';
	ptr = array;
	loop = 0;
	i = -1;
	brainfuckalgo(ptr, loop, brain_fuck_ptr, i);
}
