/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:05:03 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/19 12:12:11 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1_c;
	char	*s2_c;
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	s1_c = (char *) s1;
	s2_c = (char *) s2;
	while (s1_c[i] == s2_c[i] && i < n)
		i++;
	return (s1_c[i] - s2_c[i]);
}
