/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:43:42 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/08 19:09:20 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*b;

	d = (unsigned char*)s1;
	b = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (*d != *b)
			return (*d - *b);
		if (*d == '\0')
			return (0);
		d++;
		b++;
	}
	return (0);
}

/*int		main(void)
{
	char str[] = "1234qwe567";
	char dst[] = "zzz";

	printf("%d\n", ft_strncmp(str, dst, 10));
	printf("%d\n", strncmp(str, dst, 10));
	return (0);
}*/
