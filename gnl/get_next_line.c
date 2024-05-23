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

char	*free_null(char *ptr)
{
	free(ptr);
	ptr = NULL;
	return (ptr);
}

static char	*fill_storage(int fd, char *read_buffer, char *storage)
{
	int		sizeof_read;
	char	*temp_reserve;

	sizeof_read = 1;
	while (sizeof_read > 0)
	{
		sizeof_read = read(fd, read_buffer, BUFFER_SIZE);
		if (sizeof_read == -1)
		{
			storage = free_null(storage);
			return (NULL);
		}
		if (sizeof_read == 0)
			break ;
		read_buffer[sizeof_read] = '\0';
		if (!storage)
			storage = ft_strdup("");
		temp_reserve = storage;
		storage = ft_strjoin(temp_reserve, read_buffer);
		temp_reserve = free_null(temp_reserve);
		if (ft_strchr (read_buffer, '\n'))
			break ;
	}
	return (storage);
}

static char	*get_text_line(char *text_line)
{
	size_t	i;
	char	*storage;

	i = 0;
	while (text_line[i] != '\n' && text_line[i] != '\0')
		i++;
	if (text_line[i] == '\0')
		return (NULL);
	storage = ft_substr(text_line, i + 1, ft_strlen(text_line) - i);
	if (*storage == '\0')
		storage = free_null(storage);
	text_line[i + 1] = '\0';
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*text_line;
	char		*read_buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > 2147483647)
		return (NULL);
	read_buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_buffer)
		return (NULL);
	text_line = fill_storage(fd, read_buffer, storage);
	read_buffer = free_null(read_buffer);
	if (!text_line)
	{
		storage = NULL;
		return (NULL);
	}
	storage = get_text_line(text_line);
	return (text_line);
}
