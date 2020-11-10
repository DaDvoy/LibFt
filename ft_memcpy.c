/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:04:05 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/08 22:31:32 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	t;
	size_t	y;
	char	*estr;
	char	*edst;

	t = 0;
	estr = (char*)src;
	edst = (char*)dst;
	while (estr[t])
	{
		while (edst[t] < n)
		{
			t++;
		}
		y = t;
		return (char*)(dst + y);
	}
	return (0);
}

int		main(void)
{
	char src[] = "12345678";
	char dst[] = "qwertyui";

	printf("%s\n", memcpy(dst, src, 0));
	printf("%s\n", dst);
	printf("%s\n", ft_memcpy(dst, src, 0));
	printf("%s\n", dst);
	return (0);
}