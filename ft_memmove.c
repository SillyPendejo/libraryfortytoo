/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:37:27 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/24 21:24:41 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*buf;
	void	*ret;
	size_t	i;

	i = -1;
	ret = dst;
	if (!(buf = malloc(sizeof(src) * len)))
		return (NULL);
	while (++i < len)
		((unsigned char *)buf)[i] = ((unsigned char *)src)[i];
	i = -1;
	while (++i < len)
		((unsigned char *)dst)[i] = ((unsigned char *)buf)[i];
	return (ret);
}
