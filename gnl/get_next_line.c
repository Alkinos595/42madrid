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

static char	*free_null(char *ptr, char *ptr2)
{
	if (ptr2 == NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	else
	{
		free(ptr);
		free(ptr2);
		ptr = NULL;
		ptr2 = NULL;
		return (NULL);
	}
}

static char	*get_line(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	str = ft_substr(str, 0, i);
	if (!str)
		return (NULL);
	return (str);
}

static char	*clean_storage(char *str)
{
	int		i;
	char	*new_storage;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	new_storage = ft_substr(str, i, ft_strlen(str) - i);
	if (!new_storage)
		return (NULL);
	free_null(str, NULL);
	return (new_storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*read_buffer;
	int			sizeof_read;

	sizeof_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483648)
		return (NULL);
	read_buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_buffer)
		return (NULL);
	while (ft_strchr (storage, '\n') == NULL)
	{
		sizeof_read = read(fd, read_buffer, BUFFER_SIZE);
		if (sizeof_read <= 0)
			break ;
		read_buffer[sizeof_read] = '\0';
		storage = ft_strjoin(storage, read_buffer);
	}
	read_buffer = free_null(read_buffer, NULL);
	read_buffer = get_line(storage);
	storage = clean_storage(storage);
	if(!storage && !read_buffer)
		free_null(storage, read_buffer);
	return (read_buffer);
}
