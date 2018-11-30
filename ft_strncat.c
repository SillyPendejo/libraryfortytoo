/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:54:22 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/25 15:51:42 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = -1;
	while (s1[len])
		len++;
	while (s2[++i] && i < n)
		s1[len + i] = s2[i];
	if (n > 0)
		s1[len + i] = '\0';
	return (s1);
}
