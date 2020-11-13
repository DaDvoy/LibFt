/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:37:52 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/10 20:16:22 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
