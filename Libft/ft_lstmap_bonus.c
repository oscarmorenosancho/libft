/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:56:38 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/27 19:26:47 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static t_list	*ft_applyftonode(t_list *curnode, t_list *newlistlast, \
	t_list **newlist, void *(*f)(void *))
{
	t_list	*curnew;

	if (! curnode || ! f || ! newlist)
		return (0);
	curnew = ft_lstnew((*f)(curnode->content));
	if (! curnew)
		return (0);
	if (! *newlist)
		*newlist = curnew;
	else if (newlistlast)
		newlistlast->next = curnew;
	else
	{
		newlistlast = ft_lstlast(*newlist);
		if (newlistlast)
		newlistlast->next = curnew;
	}
	return (curnew);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*cur;
	t_list	*curnew;

	newlist = 0;
	curnew = 0;
	cur = lst;
	while (cur && (! newlist || curnew))
	{
		curnew = ft_applyftonode(cur, curnew, &newlist, f);
		if (!curnew && !newlist)
			return (0);
		cur = cur->next;
	}
	if (! curnew && newlist)
		ft_lstclear(&newlist, del);
	return (newlist);
}
