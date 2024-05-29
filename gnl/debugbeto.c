/*
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
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
	if(str == NULL)
		return(0);
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

	if (!s)
		return (NULL);
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

static char	*free_null(char *ptr)
{
	free(ptr);
	ptr = NULL;
	return (ptr);
}

static char	*fill_storage(int fd, char *read_buffer)
{
	char*	text_read;
	int		sizeof_read;
	char*	temp_reserve;

	sizeof_read = 1;
	while (sizeof_read > 0 && ft_strchr (text_read, '\n') == NULL)
	{
		sizeof_read = read(fd, read_buffer, BUFFER_SIZE);
		if (sizeof_read == -1)
			return (text_read = free_null(text_read));
		if (sizeof_read == 0)
		{
			text_read = ft_strdup("");
			break ;
		}
		read_buffer[sizeof_read] = '\0';
		if (!text_read)
			text_read = ft_strdup("");
		temp_reserve = text_read;
		text_read = ft_strjoin(temp_reserve, read_buffer);
		temp_reserve = free_null(temp_reserve);
	}
	return (text_read);
}

static char	*get_text_line(char* str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n') {
        i++;
    }
    return (ft_substr(str, 0, i));
}

static char	*clean_storage(char* str)
{
	int		i;
	char	*new_storage;

	i = 0;
	if (!str || *str == '\0')
        return free_null(str);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	new_storage = ft_substr(str, i, ft_strlen(str) - i);
	str = free_null(str);
	return new_storage;
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
	storage = fill_storage(fd, read_buffer);
	read_buffer = free_null(read_buffer);
	if(!storage)
		return (storage = free_null(storage));
	text_line = get_text_line(storage);
	if(text_line == NULL)
		return (NULL);
	storage = clean_storage(storage);	
 	return (text_line);
}
int	main(void)
{
	int		fd;
	char	*line;
	int		i;
	int		end;

	fd = open("only_nl.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error al abrir el archivo");
		return (0);
	}
	i = 0;
	end = 4;
	line = "";
 	while (i < end)
	{
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

*/