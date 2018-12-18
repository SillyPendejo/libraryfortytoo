/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 03:06:21 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/16 04:55:58 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	comp(const char *haystack, const char *needle)
{
	int j;

	j = 1;
	while (needle[j] && haystack[j] &&
			needle[j] == haystack[j])
		j++;
	if (needle[j])
		return (0);
	return (1);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (comp((char *)haystack + i, needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
