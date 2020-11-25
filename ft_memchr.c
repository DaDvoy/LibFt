/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 20:37:52 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/23 01:06:56 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	t;
	unsigned char	*str;

	i = 0;
	t = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == t)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
