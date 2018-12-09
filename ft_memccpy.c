/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 23:03:15 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/09 20:14:56 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*usrc;
	unsigned char	*udst;

	i = 0;
	usrc = (unsigned char *)src;
	udst = (unsigned char *)dst;
	uc = (unsigned char)c;
	while (i < n)
	{
		udst[i] = usrc[i];
		if (udst[i] == uc)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
