/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:42:01 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/07 16:38:29 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t		wcount(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (s[i] != c)
	{
		words++;
		while (s[i] != c)
			i++;
	}
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			words++;
		i++;
	}
	return (words);
}

static size_t		wsize(char const *s, char c, size_t wordnum)
{
	size_t	i;
	size_t	words;
	size_t	size;

	i = 0;
	words = 0;
	size = 0;
	if (s[i] != c)
	{
		words++;
	}
	while (s[i + 1])
	{
		if (words == wordnum)
		{
			while (s[i + size] != c && s[i + size])
				size++;
			break ;
		}
		if (s[i] == c && s[i + 1] != c)
			words++;
		i++;
	}
	return (size);
}

static size_t		filler(char const *s, char c, char **ret, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	si;
	size_t	ws;

	si = 0;
	i = 0;
	j = -1;
	while (i < words)
	{
		ws = wsize(s, c, i + 1);
		if (!(ret[i] = (char *)malloc(sizeof(**ret) * ws + 1)))
			return (0);
		while (s[si] == c)
			si++;
		while (++j < ws)
		{
			ret[i][j] = s[si];
			si++;
		}
		ret[i][j] = '\0';
		j = -1;
		i++;
	}
	return (1);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	words;
	char	**ret;

	words = 0;
	if (!s)
		return (NULL);
	else if (!s[0])
	{
		if (!(ret = (char **)malloc(sizeof(*ret) * 2)))
			return (NULL);
	}
	words = wcount(s, c);
	else if (!(ret = (char **)malloc(sizeof(*ret) * words + 1)))
		return (NULL);
	if (!filler(s, c, ret, words))
		return (NULL);
	ret[words] = '\0';
	return (ret);
}
