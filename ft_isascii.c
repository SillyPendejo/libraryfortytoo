/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 06:29:04 by tiyellow          #+#    #+#             */
/*   Updated: 2018/11/30 06:29:51 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (uc >= 0 && uc <= 127)
		return (1);
	return (0);
}
