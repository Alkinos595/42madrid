/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:26:12 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/20 11:26:18 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = *src;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[10] = "123456789";
	char	dest1[10];
	char	dest2[10];

	strcpy(dest1, src);
	printf("dest1: %s\n", dest1);

	ft_strcpy(dest2, src);
	printf("dest2: %s\n", dest2);
}
*/