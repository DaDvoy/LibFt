/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:48:36 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/20 01:11:29 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_itoa(int n)
{
	size_t		i;
	size_t		extra_n;
	char		*str;

	i = 0;
	extra_n = n;
	// if (!n)
	// 	return (NULL);
	while (str[i] != '\0')
	{
		extra_n = extra_n / 10;
		i++;
	}
	extra_n = n;
	if ((str = (char *)malloc((i + 1) * sizeof(char))) == NULL)
		return (NULL);
	if (extra_n < 0)
	{
		str[i] = str[i + 1];
		str[0] = '-';
		extra_n = extra_n * -1;
	}
	str[i + 1] = '\0';
	i--;
	while (i > 0)
	{
		str[i] = extra_n % 10 + '0';
		extra_n = extra_n / 10;
		i--;
	}
	return (str);
}

int		main(void)
{
	int n = -133456;

	printf("%s\n", ft_itoa(n));
}
