/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 04:05:53 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/16 04:57:40 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	comp(const char *haystack, const char *needle, size_t len)
{
	size_t j;

	j = 1;
	while (needle[j] && haystack[j] &&
			needle[j] == haystack[j] && j < len)
		j++;
	if (needle[j])
		return (0);
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len && len != 0)
	{
		if (haystack[i] == needle[0])
		{
			if (comp((char *)haystack + i, needle, len - i))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
