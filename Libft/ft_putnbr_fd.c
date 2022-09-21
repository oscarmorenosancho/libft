/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:17:32 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/21 10:46:46 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_utoa(unsigned int nb, char *buf);

char	*ft_itostr(int n, char *nbs)
{
	char		neg;
	long int	aux;
	size_t		len;
	char		buf[12];
	char		*p;

	if (nbs)
	{
		p = buf;
		neg = (n < 0);
		aux = (long int) n;
		if (neg)
		{
			aux = -aux;
			buf[0] = '-';
			p++;
		}
		len = ft_utoa ((unsigned int)aux, p);
		if (neg)
			len++;
		ft_memcpy(nbs, buf, len);
		nbs[len] = 0;
	}
	return (nbs);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	s[13];

	ft_itostr(n, s);
	ft_putstr_fd(s, fd);
}
