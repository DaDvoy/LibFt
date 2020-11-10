/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 21:43:25 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/09 22:41:26 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void		ft_bzero(void *s, size_t n)
{
	size_t			p;
	unsigned char	*es;

	es = (unsigned char*)s;
	while (p < n)
	{
		es[p] = '\0';
		p++;
	}
}

int			main(void)
{
	char s[] = "qwertgbrutyroei5847932";

	bzero(s, 4);
	printf("%s\n", s + 4);
	ft_bzero(s, 4);
	printf("%s\n", s + 4);
	return (0);
}
