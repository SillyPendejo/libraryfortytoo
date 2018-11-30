/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 06:18:11 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/30 06:18:58 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if ((uc >= 'A' && uc <= 'Z') ||
			(uc >= 'a' && uc <= 'z') ||
			(uc >= '0' && uc <= '9'))
		return (1);
	return (0);
}
