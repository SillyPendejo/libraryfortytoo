/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:50:01 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/18 01:17:54 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;
	size_t	tmp;

	tmp = size;
	if (tmp > size + 1)
		return (NULL);
	if (!(ret = (char*)malloc(sizeof(*ret) * (size + 1))))
		return (NULL);
	ft_bzero(ret, size + 1);
	return (ret);
}
