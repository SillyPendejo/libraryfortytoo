/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 23:13:48 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/23 19:48:37 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*ret;

	len = 0;
	i = -1;
	while (s1[len])
		len++;
	if (!(ret = (char*)malloc(sizeof(*ret) * len + 1)))
		return (NULL);
	while (s1[++i])
		ret[i] = s1[i];
	ret[i] = '\0';
	return (ret);
}
