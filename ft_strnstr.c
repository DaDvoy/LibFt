/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:07:10 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/08 19:10:04 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strncmp.c"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*t;
	char	*r;
	size_t	p;
	size_t	ln;

	p = 0;
	t = (char*)haystack;
	r = (char*)needle;
	ln = ft_strlen(r);
	if (r == 0)
		return (t);
	while (t[p] != '\0')
	{
		if (t[p] == r[0])
		{
			if (ft_strncmp(&t[p], r, ln) == 0)
				return (&t[p]);
		}
		p++;
	}
	return (0);
}

int		main(void)
{
	char str[] = "123456qwert";
	char trt[] = "w";

	printf("%s\n", strnstr(str, trt, 9));
	printf("%s\n", ft_strnstr(str, trt, 9));
	return (0);
}
