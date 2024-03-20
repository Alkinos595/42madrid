/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:30:03 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/21 11:30:05 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 97 && *str <= 122 && i == 1)
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
		str++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "";
	char	str2[] = "aguacateuno";
    char	str3[] = "AGUACATEUNO";
	printf("Only low?|True=1|False=0|\nOut: %d\n", ft_str_is_lowercase(str));
	printf("Only low?|True=1|False=0|\nOut: %d\n", ft_str_is_lowercase(str2));
    printf("Only low?|True=1|False=0|\nOut: %d\n", ft_str_is_lowercase(str3));
}
*/