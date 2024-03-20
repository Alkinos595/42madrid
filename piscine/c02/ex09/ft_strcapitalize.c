/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:26:41 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/21 14:26:42 by afoinqui         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 1;
	ft_strlowcase(str);
	while (*str)
	{
		c = *str;
		if (c <= 47 || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || c >= 123)
		{
			i = 1;
		}
		else
		{
			if (i)
			{
				if (c >= 97 && c <= 122)
					*str -= 32;
				i = 0;
			}
		}
		str++;
	}
	return (str);
}
/*
//salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
#include <stdio.h>
int	main(void)
{
	char	str[100]="";
	int		i;

	i = -1;
	while (++i < 100)
	{
		printf("%c", str[i]);
	}

	ft_strcapitalize(str);
	printf("\n");

	i = -1;
	while (++i < 100)
	{
		printf("%c", str[i]);
	}
}
*/