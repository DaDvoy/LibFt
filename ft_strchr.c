/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:49:08 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/22 23:25:54 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		y;
	char	sym;

	y = 0;
	sym = (char)c;
	while (s[y] != '\0')
	{
		if (s[y] == sym)
			return ((char *)(s + y));
		y++;
	}
	if (sym == '\0')
		return (char *)(s + y);
	return (NULL);
}
