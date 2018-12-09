/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 12:10:45 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/09 14:13:41 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int			len(int n)
{
	int	l;

	l = n == 0 ? 1 : 0;
	if (n < 0)
		l++;
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

static void			filler(char *ret, int len, int n, int i)
{
	int t;
	int tmp;
	int kek;

	tmp = len;
	t = 1;
	if (n < 0)
	{
		len--;
		ret[0] = '-';
		i++;
	}
	while (len - 1 > 0)
	{
		t *= 10;
		len--;
	}
	while (i < tmp)
	{
		kek = (n / t >= 0 ? n / t : n / t * -1);
		ret[i] = '0' + kek;
		i++;
		n = n - (n / t * t);
		t /= 10;
	}
}

char				*ft_itoa(int n)
{
	int		l;
	char	*ret;

	l = len(n);
	if (!(ret = (char *)malloc(sizeof(*ret) * (l + 1))))
		return (NULL);
	filler(ret, l, n, 0);
	ret[l] = '\0';
	return (ret);
}
