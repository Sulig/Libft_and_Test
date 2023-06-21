/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:43:59 by sadoming          #+#    #+#             */
/*   Updated: 2023/06/21 18:55:21 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_nexttonull(t_list *tonull, int cnt)
{
	while (cnt > 1)
	{
		tonull = tonull->next;
		cnt--;
	}
	tonull->next = NULL;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int		cnt;
	t_list	*t_free;

	cnt = ft_lstsize(*lst);
	while (cnt > 0)
	{
		t_free = *lst;
		ft_nexttonull(t_free, cnt);
		t_free = ft_lstlast(t_free);
		(*del)(t_free->content);
		free(t_free);
		cnt--;
	}
	*lst = NULL;
}
