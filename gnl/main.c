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

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;
	int		limit;

	limit = atoi(argv[2]);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error al abrir el archivo");
		return (0);
	}
	i = 0;
	//line = get_next_line(fd);
	while (i < limit)
	{
		//printf("BUFFER_SIZE: %d\n Linea %d: %s\n", BUFFER_SIZE, i, line);
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
		i++;
	}
	if (close(fd) == -1)
	{
		printf("Error al cerrar el archivo");
		return (0);
	}
	return (0);
}
