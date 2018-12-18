/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 21:24:41 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/16 21:38:06 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long		ft_pow(long n, long pow)
{
	long tmp;
	long check;

	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	tmp = n;
	while (--pow)
	{
		check = n;
		n *= tmp;
		if (n / tmp != check)
			return (0);
	}
	return (n);
}
