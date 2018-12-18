/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:56:09 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/16 04:58:41 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	while (u1[i] && u2[i] && u1[i] == u2[i] && i < n)
		i++;
	if (i == n)
		--i;
	if (u1[i] - u2[i] == 0)
		return (1);
	return (0);
}
