/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:49:11 by lmushroo          #+#    #+#             */
/*   Updated: 2021/04/01 22:31:57 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int arg)
{
	if ((arg >= '0' && arg <= '9') || ((arg >= 'a' && arg <= 'z') ||
		(arg >= 'A' && arg <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
