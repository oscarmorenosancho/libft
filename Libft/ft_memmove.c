/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:14:55 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/19 11:12:50 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_rev(void *dst, const void *restrict src, size_t n)
{
	char	*pd;
	char	*ps;
	char	*pb;

	pd = (char *)dst;
	ps = (char *)src;
	pb = ps;
	pd += n;
	ps += n;
	while (ps < pb)
	{
		*pd = *ps;
		pd--;
		ps--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_c;
	char	*src_c;
	size_t	dif;

	dst_c = (char *)dst;
	src_c = (char *)src;	
	dif = dst_c - src_c;
	if (dif < 0)
		ft_memcpy(dst, src, len);
	else if (dif > 0)
		ft_memcpy_rev(dst, src, len);
	return (dst);
}
