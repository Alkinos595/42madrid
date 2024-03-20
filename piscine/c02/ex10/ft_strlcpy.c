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
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[11] = "Hola mundo";
	char	dest1[100];
	char	dest2[100];
	int a = strlcpy(dest1, src, 2);
	printf("dest1: %d\n", a);
	printf("dest1: %s\n", dest1);
	int b = ft_strlcpy(dest2, src, 2);
	printf("dest1: %d\n", b);
	printf("dest2: %s\n", dest2);
}
*/