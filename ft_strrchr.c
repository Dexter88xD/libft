/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:13:33 by sohamdan          #+#    #+#             */
/*   Updated: 2024/10/22 22:49:56 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*p;

	i = 0;
	p = NULL;
	while (*s)
	{
		if (s[i] == c)
			p = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else if (c != '\0')
		return ((char *)p);
	return (NULL);
}