/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:31:46 by sohamdan          #+#    #+#             */
/*   Updated: 2024/11/14 12:32:37 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*kber_lhza9(void *content)
{
	int		i;
	char	*lhza9;

	lhza9 = (char *)content;
	if (lhza9)
	{
		i = 0;
		while (lhza9[i] != '\0')
		{
			if (lhza9[i] >= 'a' && lhza9[i] <= 'z')
				lhza9[i] -= 32;
			i++;
		}
	}
	return ((void *)lhza9);
}

void	msah_lkhra(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (current == NULL)
		printf("It is NULL hh");
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
	ft_lstmap(head, kber_lhza9, msah_lkhra);
	print_list(head);
	printf("\n");
}
