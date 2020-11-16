/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:50:37 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/16 22:01:33 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		list;

	if (lst == NULL || del == NULL)
		return (NULL);
	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
	{
		del(lst->content);
		free(lst);
	}
	while (lst != NULL)
	{
		list = f(list->content);
		lst = lst->next;
	}
}
