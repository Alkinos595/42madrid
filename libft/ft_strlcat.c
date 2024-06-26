/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:41:37 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/05 21:41:40 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	if ((src == NULL || dest == NULL) && size < 1)
		return (0);
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	count = dest_len;
	if (size <= dest_len)
		return (size + src_len);
	while (*src && count < size - 1)
		dest[count++] = *src++;
	dest[count] = '\0';
	return (dest_len + src_len);
}
