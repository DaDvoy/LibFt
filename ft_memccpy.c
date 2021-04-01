/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 22:32:34 by lmushroo          #+#    #+#             */
/*   Updated: 2021/03/01 17:08:08 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*estr;
	unsigned char	*edst;
	unsigned int	i;

	edst = (unsigned char *)dst;
	estr = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		edst[i] = estr[i];
		if (edst[i] == (unsigned char)c)
			return (edst + i + 1);
		i++;
	}
	return (NULL);
}
