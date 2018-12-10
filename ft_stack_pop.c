/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:09:03 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/10 17:19:55 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stack_pop(t_stack **pile, void (*del)(void *))
{
	t_stack *tmp;

	if (pile && *pile)
	{
		tmp = (*pile)->next;
		del(*pile);
		*pile = tmp;
	}
}
