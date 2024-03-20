/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:54:06 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/21 11:54:07 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 65 && *str <= 90 && i == 1)
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
    char	str2[] = "AGUACATEUNO";
	char	str3[] = "Aguacateuno";
	printf("Only UPP?|True=1|False=0|\nOut: %d\n", ft_str_is_uppercase(str));
	printf("Only UPP?|True=1|False=0|\nOut: %d\n", ft_str_is_uppercase(str2));
    printf("Only UPP?|True=1|False=0|\nOut: %d\n", ft_str_is_uppercase(str3));
}
*/