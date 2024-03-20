/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:20:30 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/18 18:20:32 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_print(void);
void	convert(char *argv[], int data[]);
int		accumulate(int sum, int arr[]);

int	valid_s1(char *argv[], int arr[])
{
	int	sum;

	convert(argv, arr);
	sum = 0;
	sum = accumulate(sum, arr);
	if (sum >= 32 && sum <= 36)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	valid_se(char *argv[], int arr[])
{
	int	s1;

	s1 = 0;
	s1 = valid_s1(argv, arr);
	if (s1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
