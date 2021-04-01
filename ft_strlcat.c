/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:42:52 by lmushroo          #+#    #+#             */
/*   Updated: 2021/03/01 17:10:05 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	u;
	size_t	dst_len;

	u = 0;
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	while (src[u] != '\0' && u < (dstsize - 1 - dst_len))
	{
		dst[u + dst_len] = src[u];
		u++;
	}
	dst[u + dst_len] = '\0';
	return (dst_len + ft_strlen(src));
}
