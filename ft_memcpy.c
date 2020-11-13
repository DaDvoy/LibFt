/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:04:05 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/13 20:44:36 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*estr;
	unsigned char	*edst;

	if (dst == src)
		return (dst);
	edst = (unsigned char *)dst;
	estr = (unsigned char *)src;
	while (n--)
		*(edst++) = *(estr++);
	return (dst);
}
