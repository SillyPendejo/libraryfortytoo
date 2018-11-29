/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:15:39 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/25 13:34:45 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n &&
			((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	if (i + 1 == n &&
			((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		return (0);
	else
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
