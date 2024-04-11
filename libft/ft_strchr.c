/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:27:17 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/11 20:27:18 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	chr;

	chr = (char)c;
	while (*s != chr)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	ptr = (char *)s;
	return (ptr);
}
