/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:29:23 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/21 17:55:43 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_str_count(char const *s, char c)
{
	char	*p;
	size_t	count;
	int		in_str;

	p = (char *)s;
	count = 0;
	in_str = 0;
	while (*p)
	{
		if (!in_str && *p != c)
		{
			count++;
			in_str = 1;
		}
		else if (in_str && *p == c)
		{
			in_str = 0;
		}
		p++;
	}
	return (count);
}

char	*ft_next_substr(char **s, char c, char **sl)
{
	char	*ps;
	char	*pe;
	size_t	size;

	ps = *s;
	while (*ps && *ps == c)
		ps++;
	pe = ps;
	while (*pe && *pe != c)
		pe++;
	size = pe - ps;
	*s = ps;
	*sl = (char *)malloc(size + 1);
	if (*sl)
	{
		ft_memcpy(*sl, ps, size);
		sl[size] = 0;
		return (pe + 1);
	}
	return (0);
}

void	ft_reset_array(void **s, size_t n)
{
	char	**p;
	char	**pe;

	p = (char **)s;
	pe = p + n;
	while (p < pe)
	{
		*p = 0;
		p++;
	}
}

void	ft_free_array(void **s, size_t n)
{
	char	**p;
	char	**pe;

	if (s)
	{
		p = (char **)s;
		pe = p + n;
		while (p < pe)
		{
			if (*p)
				free(*p);
			*p = 0;
			p++;
		}
		free(s);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**sl;
	char	*p;
	size_t	count;
	size_t	i;

	p = (char *)s;
	count = ft_str_count(s, c);
	sl = (char **) malloc((count + 1) * sizeof(char *));
	if (sl)
	{
		ft_reset_array((void **) sl, (count + 1));
		i = 0;
		while (i < count)
		{
			p = ft_next_substr(&p, c, sl + i);
			if (p == 0)
			{
				free(sl);
				return (0);
			}
			i++;
		}
		return (sl);
	}
	return (0);
}
