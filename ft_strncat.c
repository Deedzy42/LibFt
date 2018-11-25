/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:33:01 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/25 20:16:28 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int i;
	unsigned int c;

	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (n > 0)
	{
		dest[i] = src[c];
		i++;
		c++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
