/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:37:43 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/04 15:48:12 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		y;

	y = 0;
	if (src == NULL || dst == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[y] != '\0' && y < (dstsize - 1))
	{
		dst[y] = src[y];
		y++;
	}
	dst[y] = 0;
	return (ft_strlen(src));
}

int			main(void)
{
	char	src[] = "1234567890";
	char	dst[] = "asdfghjklz";
	printf("%zu\n", strlcpy(dst, src, 10));
	printf("%zu\n", ft_strlcpy(dst, src, 10));
	printf("%s\n", dst);
	return (0);
}
