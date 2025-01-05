/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 05:47:59 by sohamdan          #+#    #+#             */
/*   Updated: 2025/01/05 21:50:49 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*previous;

	current = (*lst);
	if (lst && del)
	{
		while (current != NULL)
		{
			previous = current;
			del((*current).content);
			current = (*current).next;
			free(previous);
		}
		(*lst) = NULL;
	}
}
