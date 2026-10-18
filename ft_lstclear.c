/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:28:53 by mlazar            #+#    #+#             */
/*   Updated: 2026/10/14 11:04:17 by mlazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*sive_node;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		sive_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = sive_node;
	}
}
