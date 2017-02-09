/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:57:08 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 19:41:35 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*s;
	t_list	*n;
	t_list	*st;

	s = NULL;
	n = NULL;
	st = lst;
	while(st != NULL)
	{
		if (s == NULL)
		{
			s = f(st);
			n = s;
		}
		else
			n->next = f(st);
		st = st->next;
	}
	return (s);
}
