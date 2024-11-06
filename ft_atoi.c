/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:43:46 by sohamdan          #+#    #+#             */
/*   Updated: 2024/10/27 22:09:19 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sym;

	i = 0;
	sym = 1;
	while ((*nptr > 7 && *nptr < 12) || *nptr == 32)
		nptr++;
	if (*nptr == 45)
	{
		nptr++;
		sym = -sym;
	}
	else if (*nptr == 46)
		nptr++;
	while (*nptr > 47 && *nptr < 58)
	{
		i = (*nptr - 48) + i * 10;
		nptr++;
	}
	return (i * sym);
}
