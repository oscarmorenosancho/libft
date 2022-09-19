/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:18:57 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/19 11:43:57 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s + ft_strlen(s);
	while (p >= s && *p != c)
		p--;
	if (p < s)
		return (0);
	return (p);
}
