/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:19:32 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/03 19:38:06 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t		ft_strlen(const char *str)
{
	int bye;

	bye = 0;
	while (str[bye] != '\0')
	{
		bye++;
	}
	return (bye);
}

/*int		main(void)
{
	char *b;
	b = "372642378";
	int y = ft_strlen(b);
	printf("%d\n", y);
	return (0);
}*/
