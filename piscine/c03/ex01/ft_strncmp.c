/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:41:38 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/29 11:41:42 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest1[20] = "AguxCate";
	char dest2[20] = "aguacate";
	unsigned int i = 1;
	//-----------------------------------------------------------
	int result1 = strncmp(dest1, dest2, i);
	printf("result1: %d\n",result1);
	if (result1 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result1 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
	//-----------------------------------------------------------
	int result2 = ft_strncmp(dest1, dest2, i);
	printf("result2: %d\n",result2);
	if (result2 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result2 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
}
*/