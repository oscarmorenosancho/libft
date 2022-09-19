/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:04:10 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/19 15:41:04 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*ss;
	size_t	s_len;
	size_t	ss_len;

	s_len = ft_strlen(s);
	ss_len = s_len - start;
	if (ss_len <= 0)
		return (0);
	if (ss_len > len)
		ss_len = len;
	p = (char *)s;
	p += start;
	ss = malloc(ss_len + 1);
	if (ss)
	{
		ft_memcpy(ss, p, ss_len + 1);
		return (ss);
	}
	return (0);
}
