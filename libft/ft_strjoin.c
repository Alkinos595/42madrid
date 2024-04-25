/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:34:38 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/23 16:34:40 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*c_str;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	c_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!c_str)
		return (NULL);
	result = c_str;
	while (s1 && *s1)
		*c_str++ = *s1++;
	while (s2 && *s2)
		*c_str++ = *s2++;
	*c_str = '\0';
	return (result);
}
