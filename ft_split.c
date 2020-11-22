/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:29:16 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/22 20:47:51 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lenword(const char *str, char c)
{
	int		j;

	j = 0;
	if (str)
	{
		while (str[j] && str[j] != c)
			j++;
	}
	return (j);
}

char		*ft_subs(const char *s, char c, int *i)
{
	int		j;
	char	*str;
	int		len;

	j = 0;
	while (s[*i] && s[*i] == c)
		*i += 1;
	len = ft_lenword(s + *i, c);
	if ((str = (char *)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (s[*i] != '\0' && s[*i] != c)
	{
		str[j] = s[*i];
		j++;
		*i += 1;
	}
	str[j] = '\0';
	return (str);
}

int			ft_count_words(const char *s, char c, int count)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag = 1;
		if (s[i] != c && flag == 1)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	return (count);
}

void		*ft_free(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		k;
	int		j;

	k = 0;
	if (!s)
		return (NULL);
	count = ft_count_words(s, c, 0);
	if ((str = (char **)malloc((count + 1) * sizeof(char *))) == NULL)
		return (NULL);
	j = 0;
	while (k < count)
	{
		if ((str[k] = ft_subs(s, c, &j)) == NULL)
			return (ft_free(str));
		k++;
	}
	str[k] = NULL;
	return (str);
}
