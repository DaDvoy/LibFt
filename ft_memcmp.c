/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:57:42 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/09 21:42:50 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t;
	unsigned char	*y;
	size_t			r;

	t = (unsigned char*)s1;
	y = (unsigned char*)s2;
	r = 0;
	while (r < n)
	{
		if (t[r] != y[r])
			return (t[r] - y[r]);
		r++;
	}
	return (0);
}

int		main(void)
{
	char s1[] = "123qqq";
	char s2[] = "123qqq";

	printf("%d\n", memcmp(s1, s2, 15));
	printf("%s\n", s2);
	printf("%d\n", ft_memcmp(s1, s2, 15));
	printf("%s\n", s2);
	return (0);
}
