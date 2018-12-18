/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 05:25:19 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/18 05:37:41 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lst_clean(void *content, size_t size)
{
	if (content && size > 0)
	{
		free(content);
		content = NULL;
	}
}
