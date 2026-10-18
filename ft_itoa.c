/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:06:02 by mlazar            #+#    #+#             */
/*   Updated: 2026/10/14 11:56:02 by mlazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_n(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*res;
	int		size_nb;
	long	n;

	n = nb;
	size_nb = size_n(n);
	res = malloc((size_nb + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[size_nb] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	if (n == 0)
		res[0] = '0';
	while (size_nb > 0 && n > 0)
	{
		res[--size_nb] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
