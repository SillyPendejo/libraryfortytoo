/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:34:15 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/16 01:09:06 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	size_t			i;

	uc = (unsigned char)c;
	i = -1;
	while (++i < len)
		((unsigned char *)b)[i] = uc;
	return (b);
}
