/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:11:10 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/09 20:34:09 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t;
	unsigned char	*y;
	size_t			z;

	z = 0;
	t = (unsigned char*)dst;
	y = (unsigned char*)src;
	while (z < len)
	{
		y[z] = *t;
		z++;
		return (t);
	}
	return (t);
}

int			main(void)
{
	char src[] = "12345";
	char dst[] = "qwert";

	printf("%s\n", memmove(dst, src, 5));
	printf("%s\n", dst);
	printf("%s\n", ft_memmove(dst, src, 5));
	printf("%s\n", dst);
	return (0);
}
