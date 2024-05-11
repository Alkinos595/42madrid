/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:05:04 by afoinqui          #+#    #+#             */
/*   Updated: 2024/05/08 22:04:16 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;
	printf("\nBUFFER_SIZE: %d\n\n", BUFFER_SIZE);

	fd = open("textfile", O_RDONLY);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	i = 1;
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("Linea %d: %s\n", i, line);
		free(line);
		i++;
		line = get_next_line(fd);
	}
	if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo");
		return (1);
	}
	return (0);
}
