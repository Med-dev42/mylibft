/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:08:57 by mlazar            #+#    #+#             */
/*   Updated: 2026/10/16 11:57:41 by mlazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	if (count * size == 0)
	{
		s = malloc(1);
		if (!s)
			return (NULL);
		ft_bzero(s, 1);
		return (s);
	}
	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
