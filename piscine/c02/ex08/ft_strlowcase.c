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
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
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