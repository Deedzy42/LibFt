/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:12:02 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/10 20:21:49 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*str;

	if ((str = (char *)malloc(sizeof(str) * n)) == NULL)
		return (NULL);
	ft_memcpy(str, src, n);
	ft_memcpy(dest, str, n);
	free(str);
	return (dest);
}
