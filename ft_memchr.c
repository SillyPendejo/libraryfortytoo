/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:26:19 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/25 15:03:56 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = ((unsigned char *)s);
	i = -1;
	while (++i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return (tmp + i);
	}
	return (NULL);
}
