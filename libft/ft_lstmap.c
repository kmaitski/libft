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
	int		x;
	t_list	*new;
	t_list	*store;

	x = 0;
	store = lst;
	while (lst->next != 0)
	{
		lst = lst->next;
		x++;
	}
	new = malloc(x * sizeof(t_list) + 1);
	lst = store;
	while (lst->next != 0)
	{
		new->content = f(lst);
		new->next = new;
		lst = lst->next;
	}
	return (new);
}
