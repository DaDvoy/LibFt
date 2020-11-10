/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 23:04:05 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/01 23:27:19 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>

int		ft_tolower(char *str)
{
	int		y;
	char	k;

	y = 0;
	k = '\n';
	while (str[y] != '\0')
	{
		if (str[y] >= 'A' && str[y] <= 'Z')
		{
			str[y] = str[y] + 32;
		}
		write(1, &str[y], 1);
		y++;
	}
	write(1, &k, 1);
	return (0);
}

int		main(int argc, char **argv)
{
	char	k = '\n';

	if (argc > 2)
	{
		write(1, &k, 1);
	}
	if (argv[1] == 0)
	{
		write(1, &k, 1);
	}
	if (argc == 2)
		ft_tolower(argv[1]);
	return (0);
}
