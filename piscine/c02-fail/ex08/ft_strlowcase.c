/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:19:52 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/21 14:19:53 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[15] = "vIdEoJuEgOs";
	int		i;

	i = -1;
	while (++i < 15)
	{
		printf("%c", str[i]);
	}

	ft_strlowcase(str);
	printf("\n");

	i = -1;
	while (++i < 15)
	{
		printf("%c", str[i]);
	}
}
*/