/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:51:35 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/13 14:53:59 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s)
	{
		if (*s == (char)c)
			i++;
		if (i == 2)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
