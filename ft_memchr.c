/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:37:52 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/09 20:55:41 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			p;
	unsigned char	t;
	unsigned char	*e;

	p = 0;
	t = (unsigned char)c;
	e = (unsigned char*)s;
	while (p < n)
	{
		while (e[p] == t)
		{
			return (&e[p]);
		}
		p++;
	}
	return (0);
}

int			main(void)
{
	char	s[] = "123qwe456rty";

	printf("%s\n", memchr(s, 'w', 1));
	printf("%s\n", ft_memchr(s, 'w', 1));
	return (0);
}
