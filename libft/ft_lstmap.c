/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:57:08 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/09 17:32:40 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*n;
	t_list	*l;
	t_list	*s;

	if (!lst || !f)
		return (NULL);
	s = lst;
	l = f(s);
	n = l;
	while (s->next != NULL)
	{
		s = s->next;
		l->next = f(s);
		l = l->next;
	}
	return (n);
}
