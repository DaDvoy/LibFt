/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:15:03 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/13 23:22:08 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = a;
	while (str[a] == '\t' || str[a] == '\v' || str[a] == '\f' || str[a] == '\r'
	|| str[a] == '\n' || str[a] == ' ')
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b = b * -1;
		else
			b = 1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = c * 10 + str[a] - '0';
		a++;
	}
	return (c * b);
}
