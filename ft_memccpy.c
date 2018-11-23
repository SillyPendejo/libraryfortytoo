/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 23:03:15 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/23 23:26:32 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	void			*tmp;
	size_t			i;
	unsigned char	uc;

	i = -1;
	uc = (unsigned char)c;
	while (++i < n && ((unsigned char *)src)[i] != uc)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	if (((unsigned char *)src)[i] == uc && i < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	tmp = i + 1 == n ? NULL : dst + i + 1;
	return (tmp);
}
