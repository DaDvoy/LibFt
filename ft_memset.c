/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:05:51 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/22 19:51:38 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	p;

	p = 0;
	str = (char *)b;
	while (p < len)
	{
		str[p] = (unsigned char)c;
		p++;
	}
	return (str);
}
