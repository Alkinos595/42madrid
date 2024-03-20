/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:32:38 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/14 15:32:42 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	step;
	int	end;
	int	temp;

	step = 0;
	end = size - 1;
	while (step < end)
	{
		start = 0;
		while (start < end)
		{
			if (tab[start] > tab[start + 1])
			{
				temp = tab[start];
				tab[start] = tab[start + 1];
				tab[start + 1] = temp;
			}
			start++;
		}
		step++;
	}
}
