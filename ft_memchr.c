/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:37:52 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/18 18:29:13 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	t;
	unsigned char	*e;

	i = 0;
	t = (unsigned char)c;
	e = (unsigned char*)s;
	while (i < n)
	{
		if (e[i] == t)
		{
			return (&e[i]);
		}
		i++;
	}
	return (0);
}
