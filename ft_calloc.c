/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:41:27 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/10 18:14:48 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = (char *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (count * size);
		return(str);
}

int			main(void)
{
	char t[] = "1234qwer";

	printf("%s\n", calloc(5. 4));
	return (0);
}
