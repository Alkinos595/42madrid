/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:15:30 by afoinqui          #+#    #+#             */
/*   Updated: 2024/06/05 18:23:54 by fabriciolop      ###   ########.fr       */
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

static char	*fill_backup(int fd, char *read_buffer, char *storage)
{
	int		sizeof_read;
	char	*temp_reserve;

	sizeof_read = 1;
	while (ft_strchr (storage, '\n') == NULL)
	{
		sizeof_read = read(fd, read_buffer, BUFFER_SIZE);
		if (sizeof_read == -1)
			return (free_null(storage, NULL));
		if (sizeof_read == 0)
			break ;
		read_buffer[sizeof_read] = '\0';
		if (!storage)
			storage = ft_strdup("");
		temp_reserve = storage;
		storage = ft_strjoin(temp_reserve, read_buffer);
		temp_reserve = free_null(temp_reserve, NULL);
		if (!storage)
			return (NULL);
	}
	return (storage);
}

static char	*get_line(char *str)
{
	char	*new_str;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	new_str = ft_substr(str, 0, i);
	if (!new_str)
		return (NULL);
	return (new_str);
}

static char	*clean_storage(char *str)
{
	char	*new_str;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	if (str[i] == '\0')
		return (NULL);
	new_str = ft_substr(str, i, ft_strlen(str) - i);
	if (!new_str)
		return (free_null(new_str, NULL));
	return (new_str);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*read_backup;
	char		*read_buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483648)
		return (NULL);
	read_buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!read_buffer)
		return (NULL);
	read_backup = fill_backup(fd, read_buffer, storage);
	read_buffer = free_null(read_buffer, NULL);
	if(!read_backup)
	{
		storage = NULL;
		return(NULL);
	}
	read_buffer = get_line(read_backup);
	storage = clean_storage(read_backup);
	read_backup = free_null(read_backup, NULL);
	return (read_buffer);
}
