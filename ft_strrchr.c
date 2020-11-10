/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:24:06 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/05 16:34:05 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

char		*ft_strrchr(const char *s, int c)
{
	int		p;
	char	extra;

	extra = (unsigned char)c;
	p = ft_strlen(s);
	if (extra == '\0')
		return (char *)(s + p);
	while (p > 0)
	{
		if (s[p] == extra)
			return (char *)(s + p);
		p--;
	}
	if (s[p] == extra)
		return (char*)(s + p);
	return (NULL);
}

int			main(void)
{
	char	str[] = "01234567859";
	char	ach = '5';
	char	str2[] = "01234567859";
	char	ach2 = '5';

//	printf("%s\n", strrchr(str, ach));
//	return (0);
	printf("%s\n", ft_strrchr(str2, ach2));
	return (0);
}
