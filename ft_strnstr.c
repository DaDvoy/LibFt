/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:07:10 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/22 18:05:31 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hayst_cpy;
	char	*need_cpy;
	size_t	i;
	size_t	need_len;

	i = 0;
	hayst_cpy = (char *)haystack;
	need_cpy = (char *)needle;
	if (len == 0 && *need_cpy == '\0')
		return (hayst_cpy);
	need_len = ft_strlen(need_cpy);
	if (need_len == 0)
		return (hayst_cpy);
	while (hayst_cpy[i] != '\0' && i + need_len <= len)
	{
		if (ft_strncmp(&hayst_cpy[i], need_cpy, need_len) == 0)
			return (&hayst_cpy[i]);
		i++;
	}
	return (NULL);
}
