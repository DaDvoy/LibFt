/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:05:51 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/09 22:55:57 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void		*ft_memset(void *b, int c, size_t len)
{
	char	*t;
	size_t	p;

	p = 0;
	t = (char*)b;
	while (p < len)
	{
		t[p] = (unsigned char)c;
		p++;
	}
	return (t);
}

int			main(void)
{
	char t[10] = "1234qwer";

	printf("%s\n", memset(t, 2, 6));
	printf("%s\n", ft_memset(t, 2, 6));
	return (0);
}
