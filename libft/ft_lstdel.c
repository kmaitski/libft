/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 17:35:30 by kmaitski          #+#    #+#             */
/*   Updated: 2017/02/02 17:44:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*s;
	t_list	*n;

	s = *alst;
	while (s)
	{
		n = s->next;
		del(s->content, s->content_size);
		free(s);
		s = n;
	}
	*alst = NULL;
}
