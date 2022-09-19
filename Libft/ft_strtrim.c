/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:02:54 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/19 16:26:22 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_isincluded(int c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buf;
	char	*start;
	char	*end;
	size_t	len;
	size_t	ss_len;

	len = ft_strlen(s1);
	start = (char *)s1;
	end = (char *)s1 + len;
	while (*start && ft_isincluded(*start, set))
		start++;
	while (end >= s1 && ft_isincluded(*end, set))
		end--;
	ss_len = end - start;
	if (ss_len < 0)
		ss_len = 0;
	buf = malloc(ss_len + 1);
	if (buf)
	{
		if (ss_len > 0)
			ft_memcpy(buf, start, ss_len);
		buf[ss_len] = 0;
		return (buf);
	}
	return (0);
}
