/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:49:08 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/10 22:55:32 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		y;
	char	smt;

	y = 0;
	smt = (unsigned char)c;
	while (s[y] != '\0')
	{
		if (s[y] == smt)
			return ((char *)(s + y));
		y++;
	}
	if (smt == '\0')
		return (char *)(s + y);
	return (NULL);
}
