/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:09:22 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/17 21:44:04 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *restrict src, size_t n)
{
	char	*pd;
	char	*ps;
	char	*pe;

	pd = (char *)dst;
	ps = (char *)src;
	pe = ps + n;
	while (ps < pe)
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	return (dst);
}
