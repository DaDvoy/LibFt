/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:11:10 by lmushroo          #+#    #+#             */
/*   Updated: 2021/03/01 17:08:58 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buf_dst;
	unsigned char	*buf_src;
	int				i;
	int				j;

	buf_dst = (unsigned char *)dst;
	buf_src = (unsigned char *)src;
	if (len == 0 || buf_dst == buf_src)
		return (buf_dst);
	if (buf_src < buf_dst)
	{
		i = len - 1;
		j = -1;
	}
	else
	{
		i = 0;
		j = 1;
	}
	while (len--)
	{
		buf_dst[i] = buf_src[i];
		i += j;
	}
	return (buf_dst);
}
