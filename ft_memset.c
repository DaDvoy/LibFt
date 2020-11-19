/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:05:51 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/18 18:41:22 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char	*t;
	size_t	p;

	p = 0;
	t = (char *)b;
	while (p < len)
	{
		t[p] = (unsigned char)c;
		p++;
	}
	return (t);
}
