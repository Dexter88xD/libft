/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:57:01 by sohamdan          #+#    #+#             */
/*   Updated: 2024/11/08 17:52:00 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr_big;
	size_t	l;
	size_t	i;

	ptr_big = (char *)big;
	if (*little == 0)
		return (ptr_big);
	l = ft_strlen(little);
	if (len < l)
		return (0);
	i = 0;
	while (i <= len - l && *ptr_big)
	{
		if (ft_strncmp(ptr_big, little, l) == 0)
			return (ptr_big);
		ptr_big++;
		i++;
	}
	return (0);
}
