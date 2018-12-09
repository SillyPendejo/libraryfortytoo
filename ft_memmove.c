/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 12:04:44 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/09 12:06:18 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp;
	unsigned char *tmp2;

	tmp = dest;
	tmp2 = (unsigned char*)src;
	if (src >= dest)
		while (n--)
			*tmp++ = *tmp2++;
	else
		while (n--)
			tmp[n] = tmp2[n];
	return (dest);
}
