/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 22:32:34 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/10 20:16:25 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
