/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:06:01 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/26 23:06:03 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_chr(char const *s, char c)
{
	size_t	i;
	size_t	c_char;

	i = 0;
	c_char = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			c_char++;
		i++;
	}
	return (c_char);
}

static char	**protect_asign(char **str, int fail_at)
{
	while (--fail_at >= 0)
		free(str[fail_at]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	size_t	i;
	int		word;
	size_t	start;

	i = -1;
	word = 0;
	start = 0;
	if (!s)
		return (NULL);
	split_arr = ft_calloc(sizeof(char *), (count_chr(s, c) + 1));
	if (!split_arr)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			split_arr[word++] = ft_substr(s, start, i - start + 1);
			if (split_arr[word - 1] == NULL)
				return (protect_asign(split_arr, word));
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
	}
	return (split_arr);
}
