/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 16:51:26 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/10 16:51:51 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s[i])
		return (0);
	if (s[i] != c)
		words = 1;
	while (s[i] != c && s[i])
		i++;
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			words++;
		i++;
	}
	return (words);
}
