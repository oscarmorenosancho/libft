/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:53:08 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/19 13:16:03 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	char	*p;
	char	*pe;

	p = (char *)s;
	pe = (char *)s + n;
	while (p < pe && *p != c)
		p++;
	if (*p != c)
		return (0);
	return (p);
}
