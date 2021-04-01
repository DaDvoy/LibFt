/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:24:06 by lmushroo          #+#    #+#             */
/*   Updated: 2021/03/01 17:13:14 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_s;
	char	sym;

	sym = (char)c;
	len_s = ft_strlen(s);
	if (sym == '\0')
		return ((char *)(s + len_s));
	while (len_s > 0)
	{
		if (s[len_s] == sym)
			return ((char *)(s + len_s));
		len_s--;
	}
	if (s[len_s] == sym)
		return ((char *)(s + len_s));
	return (NULL);
}
