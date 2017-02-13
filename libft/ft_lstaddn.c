/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:32:55 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:39:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddn(t_list *begin, t_list *new, void *c)
{
	t_list	*t;
	t_list	*s;

	t = begin;
	while (t && t->content != c)
		t = t->next;
	if (t->content == c)
	{
		s = t->next;
		t->next = new;
		new->next = s;
	}
}
