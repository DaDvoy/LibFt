/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:57:38 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/01 20:59:31 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
	{
		return (arg);
	}
	else
	{
		return (0);
	}
}

int		main(void)
{
	int t;

	t = '5';
	int l = ft_isdigit(t);
	if (l)
		printf("%d is a digit", l);
	else
		printf("%d is not a digit", l);
}
