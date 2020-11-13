/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:11:10 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/11 22:33:58 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t;
	unsigned char	*y;
	size_t			z;
	size_t			x;

	t = (unsigned char*)dst;
	y = (unsigned char*)src;
	if (len == 0 || t == y)
		return (t);
	if (y < t)
	{
		z = len - 1;
		x = -1;
	}
	else
	{
		z = 0;
		x = 1;
	}
	while (len--)
	{
		t[z] = y[z];
		z += x;
	}
	return (t);
}
