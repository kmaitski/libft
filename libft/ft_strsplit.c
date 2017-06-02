/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 15:54:57 by kmaitski          #+#    #+#             */
/*   Updated: 2017/05/22 08:07:58 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	word_count(char const *s, char c)
{
	int				i;
	unsigned int	j;

	i = -1;
	j = 0;
	while (s[++i])
		if ((s[i] != c && s[i + 1] == c) || (s[i + 1] == '\0' && s[i] != c))
			j++;
	return (j);
}

static unsigned int	word_length(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char			**populate_2d(char const *s, char **arr, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	word_len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			word_len = word_length(&s[i], c);
			if (!(arr[j] = ft_strsub(s, i, word_len)))
				return (NULL);
			i += word_len;
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

char				**ft_strsplit(char const *s, char c)
{
	unsigned int	words;
	char			**fresh;

	if (!s || !c)
		return (NULL);
	words = word_count(s, c);
	if (!(fresh = (char **)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	populate_2d(s, fresh, c);
	return (fresh);
}
