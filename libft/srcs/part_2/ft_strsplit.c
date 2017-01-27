/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 15:54:57 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/26 17:13:19 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	word_count(char const *s, char c)
{
	int	x;
	int	w;

	x = 0;
	w = 0;
	while (s[x] != '\0')
	{
		if (s[x] != c && s[x + 1] == c)
			w++;
		x++;
	}
	return (w);
}

static int	word_length(char const *s, char c)
{
	int	x;

	x = 0;
	while (s[x] != '\0' && s[x] != c)
		x++;
	return (x);
}

static char	**populate_2d(char const *s, char **arr, char c)
{
	int		x;
	size_t	l;
	int		w;

	x = 0;
	w = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			x++;
		else
		{
			l = 0;
			while (s[x + l] != c)
				l++;
			arr[w] = ft_strsub(&s[x], 0, word_length(&s[x], c));
			if (arr[w] == NULL)
				return (NULL);
			x = x + l;
			w++;
		}
	}
	arr[w] = NULL;
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		x;
	char	**fresh;

	if (!s || !c)
		return (NULL);
	x = word_count(s, c);
	fresh = (char **)malloc((x) * sizeof(char *) + 1);
	if (!fresh)
		return (NULL);
	populate_2d(s, fresh, c);
	return (fresh);
}
