/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:37:43 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/23 01:08:45 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	y;

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
	dst[y] = '\0';
	return (ft_strlen(src));
}
