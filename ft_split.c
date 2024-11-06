/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:41:41 by sohamdan          #+#    #+#             */
/*   Updated: 2024/11/05 16:40:25 by sohamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_char(char const *s, char c, int *i, int *start)
{
	int	j;

	j = 0;
	while (s[(*i)] == c && s[(*i)] != '\0')
		(*i)++;
	while (s[(*i)] != c && s[(*i)] != '\0')
	{
		if (s[(*i) - 1] == c || (*i) == 0)
			(*start) = (*i);
		j++;
		(*i)++;
	}
	return (j);
}

int	ft_allocate(char **array, char const *s, char c, int *i)
{
	int	j;
	int	l;
	int	start;

	start = *i;
	j = ft_count_char(s, c, &(*i), &start);
	l = 0;
	if (j != 0)
	{
		*array = (char *)malloc((j + 1) * sizeof(char));
		if (*array == NULL)
			return (0);
		while (l < j)
		{
			(*array)[l] = s[start];
			l++;
			start++;
		}
		(*array)[l] = '\0';
	}
	return (1);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (s[0] == '\0')
		return (word);
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (i == 0)
			i++;
		if (s[i - 1] != c && s[i] == c)
			word++;
		i++;
	}
	if (s[i - 1] != c)
		word += 1;
	return (word);
}

void	ft_free(char **temp, char **array)
{
	char	**end;

	end = temp;
	while (temp < array)
	{
		free(*temp);
		(*temp)++;
	}
	free (end);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	**temp;
	int		len;
	int		i;

	if (s == NULL)
		return (NULL);
	len = ft_count_words(s, c);
	i = 0;
	array = (char **)malloc((len + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	temp = array;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (ft_allocate(array++, s, c, &i) == 0)
			return (ft_free(temp, array), NULL);
		while (s[i] == c)
			i++;
	}
	*array = NULL;
	return (temp);
}
