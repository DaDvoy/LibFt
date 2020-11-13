/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:43:42 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/11 20:25:48 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*b;

	d = (unsigned char*)s1;
	b = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (*d != *b)
			return (*d - *b);
		if (*b == '\0')
			return (0);
		d++;
		b++;
	}
	return (0);
}
