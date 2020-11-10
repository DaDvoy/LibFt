/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:24:35 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/01 22:28:47 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isprint(int arg)
{
	if (arg >= 20 && arg <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		main(void)
{
	int u;

	u = '-';
	int l;
	l = ft_isprint(u);
	if (l)
		printf("%c is true", l);
	else
		printf("%c is false", l);
}