/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:45:05 by kmaitski          #+#    #+#             */
/*   Updated: 2017/07/19 21:20:12 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new_node)
{
	t_list	*old_head;

	if (!new_node)
		return ;
	old_head = *alst;
	if (!alst)
	{
		*alst = new_node;
		new_node->next = NULL;
	}
	else
	{
		*alst = new_node;
		new_node->next = old_head;
	}
}
