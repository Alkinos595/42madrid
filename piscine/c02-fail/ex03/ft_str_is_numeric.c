/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:11:36 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/21 11:11:39 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 48 && *str <= 57 && i == 1)
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
	char	str2[] = "123451234";
	char	str3[] = "1234S1234";
	printf("Only num?|True=1|False=0|\nOut: %d\n", ft_str_is_numeric(str));
	printf("Only num?|True=1|False=0|\nOut: %d\n", ft_str_is_numeric(str2));
	printf("Only num?|True=1|False=0|\nOut: %d\n", ft_str_is_numeric(str3));
}
*/