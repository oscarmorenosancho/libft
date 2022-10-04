/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:29:50 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/28 18:32:09 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../Libft/libft.h"
#include "../Libft/libft_bonus.h"
#include <stdio.h>
#include <stdlib.h>

void	printnode(void *d)
{
	if (d)
		printf("string: %s en: %p\n", d, d);
	else
		printf("this: NULL\n");
}

void	*ft_memdup(void *s1)
{
	void	*s2;
	int		len;

	len = ft_strlen((char *) s1);
	s2 = malloc(len + 1);
	if (s2)
		ft_memcpy(s2, s1, len + 1);
	return (s2);
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*node1;
	t_list	*node2;
	char	*cont1;
	char	*cont2;
	t_list	*newlist;

	cont1 = "Content node 1";
	cont2 = "Content node 2";
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	printf ("%s %p\n",cont1, cont1);
	printf ("%s %p\n",cont2, cont2);
	node1 = ft_lstnew((void *)cont1);
	node2 = ft_lstnew((void *)cont2);
	node1->next = node2;
	printf("antes de map\n");
	newlist = ft_lstmap(node1, &ft_memdup, &free);
	printf("despues de map\n");
	ft_lstiter(node1, &printnode);
	ft_lstclear(&node1, 0);
	printnode(node1);
	ft_lstiter(newlist, &printnode);
	ft_lstclear(&newlist, &free);
	ft_lstiter(newlist, &printnode);
}
