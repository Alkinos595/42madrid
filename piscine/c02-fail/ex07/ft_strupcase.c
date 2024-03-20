/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:41:10 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/21 13:41:12 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[15] = "videojuegos";
	int		i;

	i = -1;
	while (++i < 15)
	{
		printf("%c", str[i]);
	}

	ft_strupcase(str);
	printf("\n");

	i = -1;
	while (++i < 15)
	{
		printf("%c", str[i]);
	}
}
*/