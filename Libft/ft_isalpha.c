/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:01:00 by omoreno-          #+#    #+#             */
/*   Updated: 2022/09/17 20:37:27 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
