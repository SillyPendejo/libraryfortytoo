/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiyellow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:36:18 by tiyellow          #+#    #+#             */
/*   Updated: 2018/12/18 04:17:32 by tiyellow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
	if (!(ret = f(lst)))
		return (NULL);
	start = ret;
	while (lst->next)
	{
		lst = lst->next;
		if (!(ret->next = f(lst)))
		{
			ft_lstdel(start);
			return (NULL);
		}
		ret = ret->next;
	}
	return (start);
}
