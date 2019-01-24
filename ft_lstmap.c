/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 21:01:57 by amoachon          #+#    #+#             */
/*   Updated: 2019/01/24 17:28:27 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	if ((new = (*f)(lst)) == NULL)
		return (NULL);
	tmp = new;
	while (lst->next)
	{
		lst = lst->next;
		if ((new->next = f(lst)) == NULL)
			return (NULL);
		new = new->next;
	}
	return (tmp);
}
