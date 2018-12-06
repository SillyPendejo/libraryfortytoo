/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 16:26:13 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/06 16:34:49 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ret;
	size_t	size;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(ret = (char *)malloc(sizeof(*ret) * size + 1)))
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	size = 0;
	while (s2[size])
	{
		ret[i + size] = s2[size];
		size++;
	}
	ret[i + size] = '\0';
	return (ret);
}
