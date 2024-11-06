/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:14:52 by sohamdan          #+#    #+#             */
/*   Updated: 2024/10/25 21:56:42 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*ptr_src;
	char		*ptr_dst;

	ptr_src = src;
	ptr_dst = dst;
	while (size-- > 0 && *src != '\0')
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (ft_strlen(ptr_dst) + ft_strlen (ptr_src));
}
