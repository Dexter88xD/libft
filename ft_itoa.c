/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:40:45 by sohamdan          #+#    #+#             */
/*   Updated: 2024/10/28 14:51:59 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_negative(char *s, long nn)
{
	if (nn < 0)
	{
		s[0] = '-';
		nn *= -1;
	}
	return (nn);
}

long	len_iint(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		len_len;
	long	nn;

	nn = (long)n;
	len = len_iint(n);
	len_len = len;
	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	nn = ft_negative(s, nn);
	if (nn >= 0 && nn <= 9)
	{
		s[len - 1] = nn + 48;
		nn /= 10;
	}
	while (nn > 0)
	{
		s[len-- - 1] = (nn % 10) + 48;
		nn /= 10;
	}
	s[len_len] = '\0';
	return (s);
}
