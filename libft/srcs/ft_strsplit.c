/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 15:54:57 by kmaitski          #+#    #+#             */
/*   Updated: 2017/01/11 16:57:27 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	populate_2d(char const *s, char **arr, char c);
static void	populate_string(char const *s, char *dest, char c);
static int	word_count(char const *s, char c);

char		**ft_strsplit(char const *s, char c)
{
	int		x;
	char	**fresh;

	if (!s || !c)
		return (NULL);
	x = word_count(s, c);
	fresh = (char **)malloc(x * sizeof(char *) + 1);
	if (!fresh)
		return (NULL);
	populate_2d(s, fresh, c);
	return (fresh);
}

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

static void	populate_2d(char const *s, char **arr, char c)
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
			arr[w] = ft_strnew(l + 1);
			populate_string(&s[x], arr[w], c);
			x = x + l;
			w++;
		}
	}
}

static void	populate_string(char const *s, char *dest, char c)
{
	int	x;

	x = 0;
	while (s[x] != c)
	{
		dest[x] = s[x];
		x++;
	}
}
