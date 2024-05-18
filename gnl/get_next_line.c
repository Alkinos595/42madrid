/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:15:30 by afoinqui          #+#    #+#             */
/*   Updated: 2024/05/13 23:38:13 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char	*storage;
	char		*read_buffer;
	int			sizeof_read;

	sizeof_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!read_buffer)
		return (NULL);
	while (ft_strchr(storage, '\n') == NULL && sizeof_read > 0)
	{
		sizeof_read = read(fd, read_buffer, BUFFER_SIZE);
		if (sizeof_read == -1)
		{
			storage = free_and_null(read_buffer, storage);
			return (NULL);
		}
		read_buffer[sizeof_read] = '\0';
		storage = ft_strjoin(storage, read_buffer);
	}
	free(read_buffer);
	
	read_buffer = read_line(storage);
	storage = create_substring(storage);
	return (read_buffer);
}
