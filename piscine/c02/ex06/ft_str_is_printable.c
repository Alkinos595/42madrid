/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:04:16 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/21 12:04:18 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 32 && *str != 127 && i == 1)
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
	char	str2[] = " 5?Gg`| / ~";
    char	str3[] = "\tHola mundo";
	printf("Only UPP?|True=1|False=0|\nOut: %d\n", ft_str_is_printable(str));
	printf("Only UPP?|True=1|False=0|\nOut: %d\n", ft_str_is_printable(str2));
    printf("Only UPP?|True=1|False=0|\nOut: %d\n", ft_str_is_printable(str3));
}
*/