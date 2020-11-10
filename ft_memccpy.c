/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 22:32:34 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/09 19:42:43 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			p;
	unsigned char	*esrc;
	unsigned char	*edst;

	p = 0;
	esrc = (unsigned char*)src;
	edst = (unsigned char*)dst;
	while (p < n)
	{
		esrc[p] = edst[p];
		if (esrc[p] == (unsigned char)c)
			return (&edst[++p]);
		p++;
	}
	return (NULL);
}

int			main(void)
{
	char src[] = "12345678900000";
	char dst[] = "qwertyuioppppp";

	printf("%s\n", memccpy(dst, src, 'z', 6));
	printf("%s\n", dst);
	printf("%s\n", ft_memccpy(dst, src, 'z', 6));
	printf("%s\n", dst);
	return (0);
}
