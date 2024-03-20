/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:40:56 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/29 14:40:58 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*
#include<unistd.h>
#include<string.h>
int main(void)
{
	char src[20] = "cate";
	char dest[20] = "agua";
	char src2[20] = "cate";
	char dest2[20] = "agua";
	int a = 0;
	int b = 0;
	unsigned int i = 0;
	
	ft_strncat(dest, src, i);
	while(dest[a] != '\0')
	{
		write(1,&dest[a],1);
		a++;
	}

	write(1, "\n", 1);

	strncat(dest2, src2, i);
	while(dest2[b] != '\0')
	{
		write(1,&dest2[b],1);
		b++;
	}
	return 0;
}
*/