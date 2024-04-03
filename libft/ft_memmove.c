/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afoinqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:39:57 by afoinqui          #+#    #+#             */
/*   Updated: 2024/04/03 11:39:58 by afoinqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dst;
	const char	*c_src;

	c_dst = (char *)dst;
	c_src = (const char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst >= src)
		while (len--)
			c_dst[len] = c_src[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
