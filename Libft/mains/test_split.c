/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:55:44 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/22 17:20:27 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	char	**s;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
		s = ft_split(argv[1], ' ');
		i = 0;
		while (s[i])
		{
			printf("|%s|\n", s[i]);
			i++;
		}
	}
}
