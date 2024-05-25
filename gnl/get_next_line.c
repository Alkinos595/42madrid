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

static char	*free_null(char *ptr)
{
	free(ptr);
	ptr = NULL;
	return (ptr);
}

static char	*fill_storage(int fd, char *read_buffer, char *storage)
{
	char	*text_read;
	int		sizeof_read;
	char	*temp_reserve;

	sizeof_read = 1;
	text_read = storage;
	while (sizeof_read > 0 && ft_strchr (text_read, '\n') == NULL)
	{
		sizeof_read = read(fd, read_buffer, BUFFER_SIZE);
		if (sizeof_read == -1)
			return (text_read = free_null(text_read));
		if (sizeof_read == 0)
			break ;
		read_buffer[sizeof_read] = '\0';
		if (!text_read)
			text_read = ft_strdup("");
		temp_reserve = text_read;
		text_read = ft_strjoin(temp_reserve, read_buffer);
		temp_reserve = free_null(temp_reserve);
	}
	return (text_read);
}

static char	*get_text_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	return (ft_substr(str, 0, i));
}

static char	*clean_storage(char *str)
{
	int		i;
	char	*new_storage;

	i = 0;
	if (!str || *str == '\0')
		return (free_null(str));
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	new_storage = ft_substr(str, i, ft_strlen(str) - i);
	str = free_null(str);
	return (new_storage);
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
	if (storage == NULL || ft_strchr (storage, '\n') == NULL)
		storage = fill_storage(fd, read_buffer, storage);
	read_buffer = free_null(read_buffer);
	if (!storage)
		return (storage = free_null(storage));
	text_line = get_text_line(storage);
	if (text_line == NULL)
		return (NULL);
	storage = clean_storage(storage);
	return (text_line);
}
