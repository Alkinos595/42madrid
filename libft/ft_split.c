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

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	size_t	c_count;
	size_t	i;

	c_count = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			c_count++;
		i++;
	}
	split_arr = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split_arr)
		return (NULL);
	split_arr = ft_write_result(s, c, split_arr);
	return (split_arr);
}
