/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:29:50 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/24 12:52:58 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../_bonus.h"
#include <stdio.h>
#include <stdlib.h>

void	printnode(void *node)
{
	t_list	*n;

	n = (t_list *)node;
	if (n)
		printf("this: %p content: %s next: %p \n", n, n->content, n->next);
	else
		printf("this: NULL\n");
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	node1 = ft_lstnew((void *)"Content node 1");
	node2 = ft_lstnew((void *)"Content node 2");
	node3 = ft_lstnew((void *)"Content node 3");
	node4 = ft_lstnew((void *)"Content node 4");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	printnode(node1);
	printnode(node2);
	printnode(node3);
	printnode(node4);
	ft_lstiter(node1, &printnode);
	ft_lstclear(&node1, free);
	printnode(node1);
}
