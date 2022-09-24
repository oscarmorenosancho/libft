/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:52:33 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/24 11:44:07 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cur;

	cur = lst;
	while (cur)
	{
		f((void *)cur->content);
		if (cur->next)
			cur = cur->next;
	}
}
