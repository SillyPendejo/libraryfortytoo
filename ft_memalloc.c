/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 06:30:28 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/02 06:42:01 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if (!(ret = malloc(sizeof(*ret) * size)))
		return (NULL);
	ft_memset(ret, 0, size);
	return (ret);
}
