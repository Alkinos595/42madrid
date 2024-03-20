/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:03:14 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/22 15:03:16 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && *src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[10] = "123456789";
	char	dest1[10];
	char	dest2[10];

	strlcpy(dest1, src, 3);
	printf("dest1: %s\n", dest1);

	ft_strlcpy(dest2, src, 3);
	printf("dest2: %s\n", dest2);
}
*/