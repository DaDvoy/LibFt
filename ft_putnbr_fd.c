/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 19:46:46 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/19 22:58:20 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0 && fd > 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 0 && fd > 0)
	{
		if (n / 10 > 0)
		{
			ft_putnbr_fd(n / 10, fd);
		}
	}
	nbr = n % 10 + '0';
	write(fd, &nbr, 1);
}
