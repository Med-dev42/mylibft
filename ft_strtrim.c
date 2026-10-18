/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:17:31 by mlazar            #+#    #+#             */
/*   Updated: 2026/10/14 09:39:55 by mlazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_str(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*game_over(void)
{
	char	*res;

	res = malloc(1 * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	return (res);
}

static char	*correct_code(size_t end, size_t start, char const *s1)
{
	char		*res;
	size_t		i;

	res = malloc((end - start + 2) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check_str(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	if (end == 0)
		return (game_over());
	end--;
	while (end > start && check_str(s1[end], set) == 1)
		end--;
	if (start > end)
		return (game_over());
	return (correct_code(end, start, s1));
}
