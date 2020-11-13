/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:42:52 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/13 19:21:49 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t u;
	size_t dstlen;

	u = 0;
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (src[u] != '\0' && u < (dstsize - 1 - dstlen))
	{
		dst[u + dstlen] = src[u];
		u++;
	}
	dst[u + dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}
