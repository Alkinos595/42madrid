/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:55:58 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/20 15:56:02 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 65 && *str <= 90 && i == 1)
		{
			i = 1;
		}
		else if (*str >= 97 && *str <= 122 && i == 1)
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
	char	str[] = "AguacateUno";
	char	str2[] = "Aguacate2";
	printf("Only alpha?|True=1|False=0|\nOut: %d\n", ft_str_is_alpha(str));
	printf("Only alpha?|True=1|False=0|\nOut: %d\n", ft_str_is_alpha(str2));
}
*/