/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:15:03 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/06 21:54:22 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = a;
	while ((str[a] >= 9 && str[a] <= 13) || str[a] == '-')
		a++;
	while (str[a] == 32)
		a++;
	if (str[a] == '-')
	{
		b = b * -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = c * 10 + str[a] - '0';
		a++;
	}
	return (c * b);
}

int		main()
{
	int y;

	y = ft_atoi("   765.65");
	printf("%d\n", y);
}
