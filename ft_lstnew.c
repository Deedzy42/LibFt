/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:19:28 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/19 14:15:21 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = (t_list *)malloc(sizeof(lst))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		content_size = 0;
	}
	else
	{
		if ((lst->content = (void *)malloc(sizeof(lst->content)
			* content_size)) == NULL)
			return (NULL);
		ft_memcpy(lst->content, content, content_size);
	}
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
