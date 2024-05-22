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

static char	*fill_storage(int fd, char *read_buffer, char *storage)
{
	int		sizeof_read;
	char	*temp_reserve;

	sizeof_read = 1;
	while (sizeof_read > 0)
	{
		sizeof_read = read(fd, read_buffer, BUFFER_SIZE);
		if (sizeof_read == -1)
			return (NULL);
		if (sizeof_read == 0)
			break ;
		read_buffer[sizeof_read] = '\0';
		if (!storage)
			storage = ft_strdup("");
		temp_reserve = storage;
		storage = ft_strjoin(temp_reserve, read_buffer);
		free(temp_reserve);
		temp_reserve = NULL;
		if (ft_strchr (read_buffer, '\n'))
			break ;
	}
	return (storage);
}

static char	*get_text_line(char *text_line)
{
	size_t	count;
	char	*storage;

	count = 0;
	while (text_line[count] != '\n' && text_line[count] != '\0')
		count++;
	if (text_line[count] == '\0')
		return (NULL);
	storage = ft_substr(text_line, count + 1, ft_strlen(text_line) - count);
	if (*storage == '\0')
	{
		free(storage);
		storage = NULL;
	}
	text_line[count + 1] = '\0';
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*text_line;
	char		*read_buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_buffer)
		return (NULL);
	text_line = fill_storage(fd, read_buffer, storage);
	free(read_buffer);
	read_buffer = NULL;
	if (!text_line)
		return (NULL);
	storage = get_text_line(text_line);
	return (text_line);
}
