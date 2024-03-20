/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:58:05 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/29 11:58:09 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
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

	ft_strcat(dest, src);
	while(dest[a] != '\0')
	{
		write(1,&dest[a],1);
		a++;
	}

	write(1, "\n", 1);

	strcat(dest2, src2);
	while(dest2[b] != '\0')
	{
		write(1,&dest2[b],1);
		b++;
	}
	return 0;
}
*/