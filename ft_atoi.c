/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 05:09:24 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/01 02:55:45 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		overflow(const char *str, int i, int neg)
{
	int		j;
	int		k;
	char	*model;

	k = 0;
	j = i;
	model = neg == 1 ? "9223372036854775807" : "9223372036854775808";
	while (str[j] >= '0' && str[j] <= '9')
	{
		while (str[j] >= model[k] && str[j] <= '9' && model[k] && str[j])
		{
			j++;
			k++;
		}
		if (!model[k])
			return (neg == 1 ? -1 : 0);
		j++;
	}
	if (i - j + 1 > 19)
		return (neg == 1 ? -1 : 0);
	return (2);
}

int				ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	nb = 0;
	neg = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		neg = str[i] == '-' ? -1 : 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (overflow(str + i, i, neg) != 2)
			return (overflow(str + i, i, neg));
		if (neg == -1 && nb == 214748364 && str[i] == '8')
			return (-2147483648);
		nb = str[i] - '0' + nb * 10;
		i++;
	}
	return (nb * neg);
}
