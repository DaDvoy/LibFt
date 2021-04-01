/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 04:33:39 by lmushroo          #+#    #+#             */
/*   Updated: 2021/03/01 17:10:02 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	ii;
	char	*str;

	i = -1;
	ii = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if ((str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (++i < len_s1)
	{
		str[i] = s1[i];
	}
	while (i <= (len_s1 + len_s2))
	{
		str[i] = s2[ii];
		i++;
		ii++;
	}
	return (str);
}
