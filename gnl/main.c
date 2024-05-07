/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:05:04 by afoinqui          #+#    #+#             */
/*   Updated: 2024/05/03 20:05:05 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		n_bytes;
	char	result[BUFFER_SIZE + 1];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (printf("fallo"), 1);
		n_bytes = read(fd, result, BUFFER_SIZE);
		printf("Valor de buffer size %d\n", BUFFER_SIZE);
		printf("Cantidad de bytes leidos %d\n", n_bytes);
		printf("bufffer leido: [%s]\n", result);
	}
	else
	{
		printf("Error, por favor envie solo un archivo");
	}
	return (0);
}
