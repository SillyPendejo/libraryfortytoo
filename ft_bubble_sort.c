/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:31:10 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/10 19:38:58 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		revsort(long long int *a)
{
	int	i;

	i = 0;
	while (a[i + 1])
	{
		if (a[i] < a[i + 1])
		{
			ft_swap(&a[i], &a[i + 1]);
			i = -1;
		}
		i++;
	}
}

void			ft_bubble_sort(long long int *a, int order)
{
	int				i;

	i = 0;
	if (order >= 0)
	{
		while (a[i + 1])
		{
			if (a[i] > a[i + 1])
			{
				ft_swap(&a[i], &a[i + 1]);
				i = -1;
			}
			i++;
		}
	}
	else
		revsort(a);
}
