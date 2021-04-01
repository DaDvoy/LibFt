/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 21:43:25 by lmushroo          #+#    #+#             */
/*   Updated: 2021/03/01 16:43:13 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			p;
	unsigned char	*es;

	es = (unsigned char *)s;
	p = 0;
	while (p < n)
	{
		es[p] = '\0';
		p++;
	}
}
