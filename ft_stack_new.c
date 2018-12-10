/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:22:00 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/10 17:25:14 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_stack	*ft_stack_new(void const *content)
{
	t_stack	*ret;

	if (!(ret = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	if (!content)
		ret->content = NULL;
	else
	{
		if (!(ret->content = malloc(sizeof(ret->content))))
		{
			free(ret);
			return (NULL);
		}
		ft_memcpy(ret->content, content, sizeof(ret->content));
	}
	ret->next = NULL;
	return (ret);
}
