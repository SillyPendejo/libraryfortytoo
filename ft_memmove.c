/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:37:27 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/02 06:48:05 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static char		direction(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	dir;

	i = 0;
	j = 0;
	dir = 'n';
	while (i < len)
	{
		while (j < len)
		{
			if (&src[i] == &dst[j])
			{
				dir = i > j ? 'l' : 'r';
				return (dir);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (dir);
}

static void		swapl(char *dst, const char *src, size_t len)
{
	int		i;
	char	buf;

	i = len - 1;
	buf = src[i];
	while (i >= 0)
	{
		dst[i] = buf;
		if (i - 1 >= 0)
			buf = src[i - 1];
		i--;
	}
}

static void		swapr(char *dst, const char *src, size_t len)
{
	int		i;
	char	buf;

	i = 0;
	buf = src[i];
	while (i < len)
	{
		dst[i] = buf;
		if (i + 1 < len)
			buf = src[i + 1];
		i++;
	}
}

static void		swapn(char *dst, const char *src, size_t len)
{
	int i;

	i = -1;
	while (++i < len)
		dst[i] = src[i];
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char	dir;

	dir = direction(dst, src, len);
	if (dir == 'r')
		swapr((char *)dst, (const char *)src, len);
	else if (dir == 'l')
		swapl((char *)dst, (const char *)src, len);
	else
		swapn((char *)dst, (const char *)src, len);
	return (dst);
}
