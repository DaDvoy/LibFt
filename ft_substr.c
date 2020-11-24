/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:39:24 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/23 21:56:58 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	lenght;

	if (s == NULL)
		return (NULL);
	lenght = ft_strlen(s);
	if (start > lenght)
		return (ft_strdup(""));
	if (lenght - start < len)
		len = lenght - start;
	str = (char *)malloc((len + 1) * sizeof(*s));
	if (str == NULL)
		return (NULL);
	if (ft_strlen(s) >= start)
		ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
