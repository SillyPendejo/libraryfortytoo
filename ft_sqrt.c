/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 21:42:30 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/16 22:15:03 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_sqrt(long nb)
{
	long		check;

	if (nb > 3)
	{
		check = 2;
		while (check * check <= nb)
		{
			if (check * check == nb)
				return (check);
			++check;
		}
		return (-1);
	}
	else
		return (-1);
}
