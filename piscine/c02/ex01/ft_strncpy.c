/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:42:37 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/20 14:42:40 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[10] = "123456789";
	char	dest1[20] = "agua";
	char	dest2[20] = "agua";

    printf("dest1: %s\n", dest1);
	strncpy(dest1, src, 5);
	printf("dest1: %s\n", dest1);

    printf("dest2: %s\n", dest2);
	ft_strncpy(dest2, src, 5);
	printf("dest2: %s\n", dest2);
	
}
*/