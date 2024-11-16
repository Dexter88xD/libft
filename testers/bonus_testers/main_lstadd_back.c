/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:08:04 by sohamdan          #+#    #+#             */
/*   Updated: 2024/11/14 16:03:58 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		i;
	t_list	*l;
	t_list	*l2;
	int		*num1;
	int		*num2;
	int		*num3;
	int		*num4;

	l = NULL;
	l2 = NULL;
	num1 = malloc(sizeof(int));
	num2 = malloc(sizeof(int));
	num3 = malloc(sizeof(int));
	num4 = malloc(sizeof(int));
	*num1 = 1;
	*num2 = 2;
	*num3 = 3;
	*num4 = 4;
	ft_lstadd_back(&l, ft_lstnew(num1));
	ft_lstadd_back(&l, ft_lstnew(num2));
	ft_lstadd_back(&l2, ft_lstnew(num3));
	ft_lstadd_back(&l2, ft_lstnew(num4));
	ft_lstadd_back(&l, l2);
	i = *(int *)((*(*(*(*l).next).next).next).content);
	printf("i = %d\n", i);
	return (0);
}
