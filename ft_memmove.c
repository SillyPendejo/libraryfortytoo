/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:37:27 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/01 06:03:48 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static char direction(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t 	j;
	char 	dir;

	i = 0;
	j = 0;
	dir = 'n';
	while (i < len && dir == 'n')
	{
		while (j < len && dir == 'n')
		{
			if (&src[i] == &dst[j])
				dir = i > j ? 'l' : 'r'; //dest is on the left if true
			j++;
		}
		i++;
	}
	return (dir);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			buf;
	size_t			it;

	it = 1;
	i = 0;
	if (direction(dst, src, len) == 'r')
	{
		i = len;
		buf = (char)src[i - 1];
		while (--i >= 0)
		{
			dst[i] = buf;
		}
	}
}
