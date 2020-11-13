/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:24:06 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/10 20:15:12 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
