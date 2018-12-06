/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:26:30 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/06 16:00:20 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strequ(char const *s1, char const *s2)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	i = 0;
	if (!s1 || !s2)
		return (0);
	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	while (u1[i] && u2[i] && u1[i] == u2[i])
		i++;
	return ((u1[i] - u2[i] == 0) ? 1 : 0);
}