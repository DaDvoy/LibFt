/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:42:02 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/01 19:55:33 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(char *str)
{
	int y;

	y = 0;
	if ((str[y] >= 'A' && str[y] <= 'Z') || (str[y] >= 'a' && str[y] <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		main()
{
	char *k = "5";

	if (ft_isalpha(k))
		printf("%c is a alph", ft_isalpha(k));
	else
		printf("%c is not a alph", ft_isalpha(k));
	return (0);
}
