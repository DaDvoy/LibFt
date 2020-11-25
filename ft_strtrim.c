/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:30:22 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/25 23:12:36 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	if ((str = ft_strdup(s1)) == NULL)
		return (NULL);
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	len = ft_strlen(str) - 1;
	while (len && ft_strchr(set, str[len]))
		len--;
	str[len + 1] = '\0';
	if ((str = ft_strdup(&str[i])) == NULL)
		return (NULL);
	return (str);
}
