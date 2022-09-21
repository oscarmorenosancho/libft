/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:20 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/20 12:58:19 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	ft_get_last_digit(unsigned int *n, unsigned int base)
{
	char	ls;

	ls = *n % base;
	*n = *n / base;
	return (ls);
}

size_t	ft_utoa(unsigned int nb, char *buf)
{
	unsigned int	i;
	char			store[11];
	unsigned int	restant_digits;
	unsigned int	s;
	size_t			ret;

	restant_digits = nb;
	i = 0;
	s = 0;
	while (restant_digits > 0 || i == 0)
	{
		store[i] = ft_get_last_digit(&restant_digits, 10);
		if (restant_digits <= 0)
			s = i;
		i++;
	}
	i = 0;
	ret = s;
	while (s >= 0)
	{
		buf[i] = ('0' + store[s]);
		s--;
		i++;
	}
	return (ret);
}

char	*ft_set_new_str(char *buf, size_t len)
{
	char		*p;

	p = (char *)malloc(len + 1);
	if (p)
	{
		ft_memcpy(p, buf, len);
		p[len] = 0;
		return (p);
	}
	return (0);
}

char	*ft_itoa(int n)
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
	len = ft_utoa ((unsigned int)aux, p);
	if (neg)
		len++;
	return (ft_set_new_str(buf, len));
}
