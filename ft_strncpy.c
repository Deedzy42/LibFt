/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:22:08 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 21:43:51 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && dest[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	if (n < ft_strlen(src))
	{
		i++;
		while (dest[i])
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
