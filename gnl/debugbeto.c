/*
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);

char	*get_next_line(int fd);

#endif

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	text_len;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	text_len = ft_strlen(s);
	if (start > text_len)
		len = 0;
	else if (len > (text_len - start))
		len = text_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	chr;

	ptr = (char *)s;
	chr = (char)c;
	while (*ptr != chr)
	{
		if (*ptr == '\0')
			return (NULL);
		ptr++;
	}
	return (ptr);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*c_str;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	c_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!c_str)
		return (NULL);
	result = c_str;
	while (s1 && *s1)
		*c_str++ = *s1++;
	while (s2 && *s2)
		*c_str++ = *s2++;
	*c_str = '\0';
	return (result);
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
			return (NULL);
		if (sizeof_read == 0)
			break;
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
	if (text_line[count] == '\0' || text_line[1] == '\0')
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

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("file1.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error al abrir el archivo");
		return (0);
	}
	i = 1;
	line = get_next_line(fd);
 	while (line != NULL)
	{
		printf("BUFFER_SIZE: %d\n Linea %d: %s\n", BUFFER_SIZE, i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	if (close(fd) == -1)
	{
		printf("Error al cerrar el archivo");
		return (0);
	}
	return (0);
}
*/