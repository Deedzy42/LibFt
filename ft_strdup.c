/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:07:16 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/12 16:14:21 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s1[i])
		i++;
	if (!(str = (char*)malloc(sizeof(str) * i + 1)))
		return (0);
	i = 0;
	while (s1[i])
		str[i] = s1[i++];
	str[i] = '\0';
	return (str);
}
