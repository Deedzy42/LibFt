/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:29:47 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/19 13:20:49 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbmo(char *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != c)
				s++;
			s--;
		}
		s++;
	}
	return (i);
}

char	*ft_nbcar(char *s, char c, int i)
{
	char	*str;
	int		y;

	y = 0;
	while (s[i + y] != c)
		y++;
	if ((str = (char *)malloc(sizeof(str) * y + 1)) == NULL)
		return (NULL);
	i -= y;
	y = 0;
	while (s[i] != c)
	{
		str[y] = s[i];
		y++;
		i++;
	}
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	int		nbmo;
	char	**tab;
	int		i;

	nbmo = ft_nbmo((char *)s, c);
	if ((tab = (char **)malloc(sizeof(tab) * nbmo + 1)) == NULL)
		return (NULL);
	i = 0;
	while (nbmo--)
	{
		while (s[i] == c && *s)
			i++;
		if (s[i] != '\0')
		{
			*tab = ft_nbcar((char *)s, c, i);
			if (*tab == NULL)
				return (NULL);
			while (s[i] != c && *s)
				i++;
		}
		*tab++;
	}
	*tab++ = '\0';
	return (tab);
}

int		main()
{
	char str[] = "coucou      comment   tu   va  ?  ";
	char **split;
	int i;

	i = 0;
	split = ft_strsplit(str, ' ');
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
