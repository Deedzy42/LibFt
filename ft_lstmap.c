/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 21:01:57 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 23:30:34 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	if ((new = (t_list *)malloc(sizeof(new))) == NULL)
		return (NULL);
	if((new = (*f)(lst)) == NULL)
		return (NULL);
	while (lst->next)
	{
		new = new->next;
		lst = lst->next;
		if ((new = (*f)(lst)) == NULL)
			return (NULL);
	}
	return (new);
}
