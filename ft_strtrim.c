/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:35:15 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/10 19:40:16 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static void	filler(char *ret, char const *s, size_t i, size_t end)
{
	size_t j;
	size_t size;

	size = end - i + 1;
	j = 0;
	while (j < size)
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	ret[j] = '\0';
}

char		*ft_strtrim(char const *s)
{
	size_t	end;
	size_t	i;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	end = i;
	while (s[end + 1])
		end++;
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	if (!(ret = (char *)malloc(sizeof(*ret) * (end - i + 1) + 1)))
		return (NULL);
	filler(ret, s, i, end);
	return (ret);
}
