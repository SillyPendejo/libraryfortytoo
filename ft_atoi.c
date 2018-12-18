/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 05:09:24 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/18 03:41:17 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		digits(const char *str)
{
	int dig;

	dig = 0;
	if (*str == '0')
		while (*str == '0')
			str++;
	while (*str >= '0' && *str <= '9')
	{
		str++;
		dig++;
	}
	return (dig);
}

static int		overflow(const char *str, int neg)
{
	char *model;

	while (*str == '0')
		str++;
	model = neg == 1 ? "9223372036854775807" : "9223372036854775808";
	while (*str >= '0' && *str <= '9')
	{
		if (*str > *model)
			return (1);
		else if (*str < *model)
			return (0);
		str++;
		model++;
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	int		neg;
	long	nb;
	long	min;

	min = 2147483648;
	nb = 0;
	neg = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		neg = *(str++) == '-' ? -1 : 1;
	if (digits(str) > 19)
		return (neg == 1 ? -1 : 0);
	else if (digits(str) == 19)
		if (overflow(str, neg))
			return (neg == 1 ? -1 : 0);
	while (*str >= '0' && *str <= '9')
	{
		nb = *(str++) - '0' + nb * 10;
		if (nb > min - 1)
			nb = (nb * -1 + min) * -1 + min * -1;
	}
	return (nb * neg);
}
