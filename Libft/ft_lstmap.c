/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:56:38 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/23 20:24:26 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*cur;
	t_list	*curinnew;
	t_list	*previnnew;

	newlist = 0;
	curinnew = 0;
	previnnew = 0;
	cur = lst;
	while (cur && (curinnew || ! newlist))
	{
		curinnew = f((void *)cur);
		if (curinnew)
		{
			if (previnnew)
				previnnew->next = curinnew;
			else
				newlist = curinnew;
			if (cur->next)
				cur = cur->next;
			previnnew = curinnew;
		}
	}
	if (! curinnew && newlist)
		ft_lstclear(&newlist, del);
	return (newlist);
}
