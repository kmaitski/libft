/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 15:54:57 by kmaitski          #+#    #+#             */
/*   Updated: 2017/03/15 20:26:11 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i + 1] == '\0' && s[i] != c))
			j++;
		i++;
	}
	return (j);
}

static size_t	word_length(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char		**populate_2d(char const *s, char **arr, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			word_len = word_length(&s[i], c);
			if (!(arr[j] = ft_strsub(s, i, word_len)))
				return (NULL);
			i = i + word_len;
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	**fresh;

	if (!s || !c)
		return (NULL);
	words = word_count(s, c);
	if (!(fresh = (char **)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	populate_2d(s, fresh, c);
	return (fresh);
}
