/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:35:01 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 20:41:27 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int i;
	int c;

	i = 0;
	c = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] && i < size)
		i++;
	while (src[c] && i < size)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
