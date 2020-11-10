/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:44:29 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/01 22:00:43 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
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

	u = '.';
	int l;
	l = ft_isascii(u);
	if (l)
		printf("%c is true", l);
	else
		printf("%c is false", l);
}