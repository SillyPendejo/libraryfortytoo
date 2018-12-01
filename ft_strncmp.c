/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 05:01:37 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/01 03:11:53 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *u1;
	unsigned char *u2;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	i = 0;
	while (u1[i] && u2[i] && i < n)
	{
		if (u1[i] != u2[i])
			return (u1[i] - u2[i]);
		i++;
	}
	return (u1[i] - u2[i]);
}
