/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:17:41 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/18 18:17:43 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	error_print(void)
{
	write(1, "Error", 7);
}

void	convert(char *argv[], int data[])
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		data[i] = argv[1][i] - '0';
		argv[1]++;
	}
}

int	accumulate(int sum, int arr[])
{
	int	i;

	i = -1;
	while (++i < 16)
	{
		sum += arr[i];
	}
	return (sum);
}
