/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:17:19 by mlazar            #+#    #+#             */
/*   Updated: 2026/10/16 18:07:42 by mlazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lit_len;

	lit_len = ft_strlen(little);
	if (lit_len == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i + lit_len <= len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j])
		{
			j++;
		}
		if (j == lit_len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
