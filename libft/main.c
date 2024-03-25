/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <afoinqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:32:46 by afoinqui          #+#    #+#             */
/*   Updated: 2024/03/19 14:32:47 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Hello world!");
	return (0);
}

/*
int	main(void)
{
	char	*a = "qwerty";
	char	buffer[10] = "qwerty123";
	int		numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		i = 0;

	printf("True=1 | False=0 | isalpha? r: %d \n", ft_isalpha(65));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isdigit(57));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isalnum(57));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isascii(57));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isprint(57));
	printf("strlen? r: %ld \n", ft_strlen(a));
	printf("tamaño de buffer: %ld\n", sizeof(buffer) / sizeof(buffer[0]));
	printf("buffer before: %s\n", buffer);
	ft_memset(buffer, 'X', sizeof(buffer) / 2);
	printf("buffer after: %s\n", buffer);
	printf("numbers before: ");
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("tamaño de numbers: %ld\n", sizeof(numbers) / sizeof(numbers[0]));
	ft_memset(numbers, 0, (sizeof(numbers) / 2));
	printf("numbers after: ");
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/