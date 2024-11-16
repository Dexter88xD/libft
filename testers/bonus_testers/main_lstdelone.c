/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 05:44:49 by sohamdan          #+#    #+#             */
/*   Updated: 2024/11/14 05:45:19 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	msah_lkhra(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current != NULL)
	{
		printf("%s", (char *)(*current).content);
		current = (*current).next;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*tail;

	head = ft_lstnew(ft_strdup("hello"));
	node1 = ft_lstnew(ft_strdup(" everyone!"));
	node2 = ft_lstnew(ft_strdup(" Today"));
	tail = ft_lstnew(ft_strdup(" is great!"));
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, tail);
	print_list(head);
	printf("\n");
	ft_lstdelone(tail, msah_lkhra);
	(*node2).next = NULL;
	print_list(head);
	printf("\n");
}
