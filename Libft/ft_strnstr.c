/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:14:45 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/19 12:35:27 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len > len)
		needle_len = len;
	p = (char *) haystack;
	while (*p)
	{
		if (! strncmp(p, needle, len))
			return (p);
		p++;
	}
	return (0);
}
