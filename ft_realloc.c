/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 00:45:00 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/17 00:50:42 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_realloc(void *p, size_t size)
{
	if (p)
		free(p);
	if (!(p = malloc(size)))
		return (NULL);
	ft_memset(p, 0, size);
	return (p);
}
