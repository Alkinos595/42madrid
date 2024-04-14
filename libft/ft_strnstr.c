/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:02:09 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/13 18:03:42 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*text;
	char	*word;

	text = (char *)big;
	word = (char *)little;
	if (!text && !len)
		return (NULL);
	if (!*word)
		return ((char *)text);
	while (*text && len)
	{
		i = 0;
		len--;
		while (text[i] == word[i] && word[i] && i <= len)
		{
			if (word[i + 1] == '\0')
				return (text);
			i++;
		}
		text++;
	}
	return (NULL);
}
