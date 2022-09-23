/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:02:24 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/23 17:58:14 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		i;
	int		nbr;
	char	*buf;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
		nbr = ft_atoi(argv[1]);
		printf("nbr: %d\n", nbr);
		buf = ft_itoa(nbr);
		if (buf)
		{
			printf("buf: %s\n", buf);
			free(buf);
		}
	}
}
