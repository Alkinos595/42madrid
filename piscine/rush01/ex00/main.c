/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:33:25 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/18 17:33:35 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		valid_s1(char *argv[], int arr[]);
int		valid_se(char *argv[], int arr[]);
int		accumulate(int sum, int arr[]);
void	convert(char *argv[], int data[]);
void	error_print(void);

int	main(int argc, char *argv[])
{
	int	data[16];

	if (argc == 2 && valid_se(argv, data))
	{
		write(1, "Todo listo", 10);
	}
	else
	{
		error_print();
	}
}
