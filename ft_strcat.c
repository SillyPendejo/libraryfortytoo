/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:43:26 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/02 03:44:48 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = 0;
	while (s1[len])
		len++;
	while (s2[++i])
		s1[len + i] = s2[i];
	s1[len + i] = '\0';
	return (s1);
}
