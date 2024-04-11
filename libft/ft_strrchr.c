/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:00:56 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/11 22:00:57 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	chr;
	int		i;

	i = 0;
	chr = (char)c;
	ptr = (char *)s;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (ptr[i] == chr)
			return (ptr+i);
		i--;
	}
	return (NULL);
}
