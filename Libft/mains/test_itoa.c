/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:02:24 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/22 19:20:11 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	ft_get_last_digit(unsigned int *n, unsigned int base);
size_t	ft_utoa(unsigned int nb, char *buf);

int	main(int argc, char **argv)
{
	int		i;
	int		nbr;
	char	buf[13];
	size_t	size;

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
		size = ft_utoa(nbr, buf);
		printf("size: %lu\n", (unsigned long)size);
		printf("buf: %s\n", buf);
	}
}
