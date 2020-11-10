/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:49:08 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/05 14:22:34 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strchr(const char *s, int c)
{
	int		y;
	char	smt;

	y = 0;
	smt = (unsigned char)c;
	if (smt == '\0')
		return (char *)(s + y);
	while (s[y] != '\0')
	{
		if (s[y] == smt)
			return ((char *)(s + y));
		y++;
	}
	return (NULL);
}

int			main(void)
{
	char	str[] = "0123456789";
	char	ach = '6';
	char	str2[] = "0123456789";
	char	ach2 = '3';

//	printf("%s\n", strchr(str, ach));
//	return (0);
	printf("%s\n", ft_strchr(str2, ach2));
	return (0);
}
