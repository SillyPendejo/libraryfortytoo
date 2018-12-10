/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:39:19 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/10 18:14:42 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(long long int *a, long long int *b)
{
	long long int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}