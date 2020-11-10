/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:49:11 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/01 21:31:39 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalnum(int arg)
{
	if ((arg >= '0' && arg <= '9') || ((arg >= 'a' && arg <= 'z') ||
		(arg >= 'A' && arg <= 'Z')))
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

	u = '6';
	int l = ft_isalnum(u);
	if (l)
		printf("%c is true", l);
	else
		printf("%c is false", l);
}
