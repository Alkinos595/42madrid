/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:32:55 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/27 18:32:57 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static long long	absolut_value(long long n)
{
	long long	abs_nbr;

	if (n < 0)
		abs_nbr = n * -1;
	else
		abs_nbr = n;
	return (abs_nbr);
}

char	*ft_itoa(int n)
{
	int				sign_flag;
	int				len_nbr;
	char			*str;
	unsigned int	nbr;

	sign_flag = 0;
	if (n < 0)
		sign_flag = 1;
	len_nbr = nbr_len(n);
	str = (char *)ft_calloc((len_nbr + 1), sizeof(char));
	if (!str)
		return (NULL);
	nbr = absolut_value(n);
	while (len_nbr--)
	{
		str[len_nbr] = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign_flag)
		*(str) = 45;
	return (str);
}
