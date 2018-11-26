/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:51:35 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 22:20:43 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int y;

	y = 0;
	i = 0;
	while (s[y])
	{
		if (s[y] == c)
			i++;
		if (i == 2)
			return ((char *)s + y);
		y++;
	}
	if (s[y] == c)
		i++;
	if (i == 2)
		return ((char *)s + y);
	return (NULL);
}
