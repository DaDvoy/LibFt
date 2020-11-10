/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:42:52 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/08 22:19:07 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t u;
	size_t dstlen;

	u = 0;
	dstlen = ft_strlen(dst);
	if (dstsize < dstlen + 1)
		return (dstlen + ft_strlen(src));
	if (dstsize > dstlen + 1)
	{
		while (src[u] != '\0' && u < (dstsize - 1 - dstlen))
		{
			dst[u + dstlen] = src[u];
			u++;
		}
		dst[u + dstlen] = 0;
	}
	return (dstlen + ft_strlen(src));
}

/*int			main(void)
{
	char	src[11] = "1234567890";
	char	dst[20] = "asdfghjklz";
	char	src2[11] = "1234567890";
	char	dst2[20] = "asdfghjklz";
	printf("%zu\n", strlcat(dst2, src2, 20));
	printf("%s\n", dst2);
	printf("%zu\n", ft_strlcat(dst, src, 20));
	printf("%s\n", dst);
	//printf("%s\n", src);
	return (0);
}*/
