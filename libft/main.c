/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <afoinqui@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:32:46 by afoinqui          #+#    #+#             */
/*   Updated: 2024/03/19 14:32:47 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <unistd.h>

int main()
{
	char str[] = " --987654321";
	/*
	f check
	n check
	r check
	t check
	v check
	space check
	*/
	printf("String: \"%s\"\n", str);
	int convertion = atoi(str);
	int convertion2 = ft_atoi(str);
	printf("Convert: %d\n", convertion);
	printf("Convert: %d\n", convertion2);
	return 0;
}

//&TEST strnstr-------------------------------------------------------
/*
int	main(void)
{
	char	text[] = "Hello, world! Test string";
	char	word[] = "world";
	size_t	len = sizeof(text);
	char	*result = ft_strnstr(text, word, len);

	if (result != NULL)
	{
		printf("Str1 encontrado en pos %zu: %s\n", result - text, result);
	}
	else
	{
		printf("Str1 no encontrado.\n");
	}
	return (0);
}
*/
//&TEST memcmp-------------------------------------------------------
/*
int main(void)
{
	char dest1[20] = "aguxCate";
	char dest2[20] = "aguacate";
	size_t size = 20;
	//-----------------------------------------------------------
	printf("Original function\n");
	int result1 = memcmp(dest1, dest2, size);
	printf("result1: %d\n",result1);
	if (result1 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result1 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
	printf("--------------------------------------------------\n");
	//-----------------------------------------------------------
	printf("My function\n");
	int result2 = ft_memcmp(dest1, dest2, size);
	printf("result2: %d\n",result2);
	if (result2 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result2 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
	return (0);
}
*/
//&Test memchr----------------------------------------------------------
/*
int main(void)
{
	char ptm[] = "aguacaxte_power";
	size_t x = sizeof(ptm) - 1;
	printf("x: %zu\n",x);
	char *result = NULL;
	char target = 120;
	result = ft_memchr(ptm, target, x);

	if (result != NULL) {
		printf("Encontrado '%c' en la posición %zu\n", target, result - ptm);
	} else {
		printf("El caracter '%c' no fue encontrado en el punter0\n", target);
	}
	return(0);
}
*/
//&TEST strncmp
/*
int main(void)
{
	char dest1[20] = "AguxCate";
	char dest2[20] = "aguacate";
	unsigned int i = sizeof(dest1);
	//-----------------------------------------------------------
	int result1 = strncmp(dest1, dest2, i);
	printf("result1: %d\n",result1);
	if (result1 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result1 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
	//-----------------------------------------------------------
	int result2 = ft_strncmp(dest1, dest2, i);
	printf("result2: %d\n",result2);
	if (result2 == 0)
		printf("\"%s\" is identical to \"%s\"\n", dest1, dest2);
	else if (result2 < 0)
		printf("\"%s\" is less than \"%s\"\n", dest1, dest2);
	else
		printf("\"%s\" is greater than \"%s\"\n", dest1, dest2);
}
*/
//&TEST strchr and strrchr----------------------------------------
/*
int	main(void)
{
	int			chr;
	const char	*src;
	char		*result;

	src = "agucacate";
	chr = 'c';
	result = ft_strchr(src, chr);
	printf("result = %s\n", result);
	return (0);
}
*/
//&TEST toupper and tolower
/*
int main(void)
{
	int x = 97;
	int y = 65;
	printf("char1: %c\n", x);
	printf("char2: %c\n",ft_toupper(x));
	printf("--------------------\n");
	printf("char1: %c\n", y);
	printf("char2: %c\n",ft_tolower(y));
	return(0);
}
*/
//&Test strlcat---------------------------------------
/*
int	main(void)
{
	char	dst[8] = "Hello";
	char	*src;
	size_t	size;
	size_t	result;

	*src = "_world!";
	size = sizeof(dst);
	result = ft_strlcat(dst, src, size);
	printf("Resulting string: %s\n", dst);
	printf("Length of concatenated string: %zu\n", result);
	return (0);
}
*/
/*
int	main(void)
{
	char	src[] = "Hello, world!";
	char	dst[20] = "agua";
	size_t	len;
	char	dest[] = "qwerty";

	ft_strlcpy(dest, "aaa", 3);

	printf("dest: %s\n", dest);

	printf("Before: %s\n", dst);
	len = ft_strlcpy(dst+4, src, sizeof(src));
	printf("Length: %zu\nAfter: %s\n", len, dst);
	return (0);
}
*/
//& memcpy & memmove test---------------------------------------
/*
int	main(void)
{
	char str [] = "agua-cate";
	printf("result1: %s\n",str);
	//ft_memcpy(str+2, str, 3);
	//ft_memmove(str+2, str, 4);
	printf("result2: %s\n",str);
	return (0);
}
*/
/*
int	main(void)
{
	int		i = 0;
	char	string[] = "Hella";
	char	dest1[6] = "Barco";
	char 	*dest3;
	int		numbers[] = {1, 2, 3, 4, 5};
	int		dest2[5] = {0, 9, 8, 7, 6};

	printf("Tamaño de string: %ld bytes", sizeof(string));
	printf("\ndest1 antes: ");
	while (i < sizeof(dest1) / sizeof(dest1[0]))
	{
		printf("%c", dest1[i]);
		i++;
	}
	ft_memcpy(dest1, string, 4);
	i = 0;
	printf("\ndest1 después: ");
	while (i < sizeof(dest1) / sizeof(dest1[0]))
	{
		printf("%c", dest1[i]);
		i++;
	}

	i = 0;
	printf("\nTamaño de numbers: %ld bytes", sizeof(numbers));
	printf("\ndest2 antes: ");
	while (i < sizeof(dest2) / sizeof(dest2[0]))
	{
		printf("%d ", dest2[i]);
		i++;
	}
	ft_memcpy(dest2, numbers, 8);
	i = 0;
	printf("\ndest2 después: ");
	while (i < sizeof(dest2) / sizeof(dest2[0]))
	{
		printf("%d ", dest2[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/

//& bzero test--------------------------------------------------------
/*
int	main(void)
{
	char	buffer[10] = "qwerty123";
	int		numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		i = 0;
	printf("\n");
	printf("test bzero with char\n");
	printf("Tamaño de buffer: %ld\n", sizeof(buffer) / sizeof(buffer[0]));
	printf("Buffer antes: %s\n", buffer);
	ft_bzero(buffer, 1);
	printf("Buffer después: ");
	while (i < sizeof(buffer) / sizeof(buffer[0]))
	{
		printf("%c", buffer[i]);
		i++;
	}
	printf("\n------------------\n");
	i = 0;
	printf("test bzero with int\n");
	printf("Tamaño de numbers: %ld\n", sizeof(numbers) / sizeof(numbers[0]));
	printf("Numbers antes: ");
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_bzero(numbers, sizeof(numbers) / 5);
	printf("Numbers después: ");
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		printf("%d ", numbers[i]);
		i++;
	}

	printf("\n\n");
	return (0);
}
*/

//& Prueba hasta memset--------------------------------------------------------
/*
int	main(void)
{
	char	*a = "qwerty";
	char	buffer[10] = "qwerty123";
	int		numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		i = 0;

	printf("True=1 | False=0 | isalpha? r: %d \n", ft_isalpha(65));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isdigit(57));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isalnum(57));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isascii(57));
	printf("True=1 | False=0 | isdigit? r: %d \n", ft_isprint(57));
	printf("strlen? r: %ld \n", ft_strlen(a));
	printf("tamaño de buffer: %ld\n", sizeof(buffer) / sizeof(buffer[0]));
	printf("buffer before: %s\n", buffer);
	ft_memset(buffer, 'X', sizeof(buffer) / 2);
	printf("buffer after: %s\n", buffer);
	printf("numbers before: ");
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("tamaño de numbers: %ld\n", sizeof(numbers) / sizeof(numbers[0]));
	ft_memset(numbers, 0, (sizeof(numbers) / 2));
	printf("numbers after: ");
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/