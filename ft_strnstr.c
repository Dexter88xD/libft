/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:57:01 by sohamdan          #+#    #+#             */
/*   Updated: 2024/10/30 09:39:09 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr_big;
	char	*ptr_little;
	size_t	l;

	ptr_big = (char *)big;
	ptr_little = (char *)little;
	if (*ptr_little == 0)
		return (ptr_big);
	l = ft_strlen(little);
	while (len - l >= 0 && *ptr_big)
	{
		if (ft_strncmp(ptr_big, ptr_little, l) == 0)
			return (ptr_big);
		ptr_big++;
		len--;
	}
	return (0);
}
