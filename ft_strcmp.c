/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 04:27:02 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/01 03:05:46 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	unsigned char *u1;
	unsigned char *u2;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	i = 0;
	while (u1[i] && u2[i])
	{
		if (u1[i] != u2[i])
			return (u1[i] - u2[i]);
		i++;
	}
	return (u1[i] - u2[i]);
}
