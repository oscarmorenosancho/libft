/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:12:02 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/24 12:59:59 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_bonus.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cur;

	cur = lst;
	i = 0;
	while (cur)
	{
		i++;
		cur = cur->next;
	}
	return (i);
}
