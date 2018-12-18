/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 22:19:06 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/17 01:21:15 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_stradd_free(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	char	*ret;
	size_t	size;

	i = -1;
	if (!s1 || !s2 || n == 0)
		return (NULL);
	size = ft_strlen(s1) + n;
	if (size + 1 < n || size + 1 < ft_strlen(s1))
		return (NULL);
	if (!(ret = (char *)malloc(sizeof(*ret) * size + 1)))
		return (NULL);
	while (s1[++i])
		ret[i] = s1[i];
	size = -1;
	while (s2[++size])
		ret[i + size] = s2[size];
	ret[i + size] = '\0';
	free((void *)s1);
	s1 = NULL;
	return (ret);
}
