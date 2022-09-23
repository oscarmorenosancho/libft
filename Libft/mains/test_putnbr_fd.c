/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:55:45 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/23 18:00:47 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	int		i;
	int		nbr;

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
		ft_putnbr_fd(nbr, 1);
	}
}
