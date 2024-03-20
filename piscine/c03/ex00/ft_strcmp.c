/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:35:33 by afoinqui          #+#    #+#             */
/*   Updated: 2024/02/27 14:35:35 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
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
	char dest1[20] = "aguaCate";
	char dest2[20] = "aguacate";
	//-----------------------------------------------------------
	int result1 = strcmp(dest1, dest2);
	printf("result1: %d\n",result1);
	if (result1 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result1 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
	//-----------------------------------------------------------
	int result2 = ft_strcmp(dest1, dest2);
	printf("result2: %d\n",result2);
	if (result2 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result2 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
}
*/