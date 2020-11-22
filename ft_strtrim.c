/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:30:22 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/23 00:49:04 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	char			*str;
	int				i;
	char			*buf;

	i = 0;
	if (!s1)
		return (NULL);
	str = ft_strdup(s1);
	if (!str)
		return (NULL);
	buf = str;
	if (!set)
		return ((char *)s1);
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	len = ft_strlen(str) - 1;
	while (len && ft_strchr(set, str[len]))
		len--;
	str[len + 1] = '\0';
	str = ft_strdup(&str[i]);
	if (!str)
		return (NULL);
	free(buf);
	return (str);
}
