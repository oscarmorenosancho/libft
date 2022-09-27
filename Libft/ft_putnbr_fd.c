/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:17:32 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/23 17:54:58 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_utobuf(unsigned int nb, char *buf);

void	ft_putnbr_fd(int n, int fd)
{
	char		neg;
	long int	aux;
	size_t		len;
	char		buf[12];
	char		*p;

	p = buf;
	neg = (n < 0);
	aux = (long int) n;
	if (neg)
	{
		aux = -aux;
		buf[0] = '-';
		p++;
	}
	len = ft_utobuf ((unsigned int)aux, p);
	p[len] = 0;
	ft_putstr_fd(buf, fd);
}
