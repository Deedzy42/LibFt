/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:29:47 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/26 21:26:42 by amoachon         ###   ########.fr       */
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
			while (*s != c && *s)
				s++;
			s--;
		}
		s++;
	}
	return (i);
}

char	*ft_nbcar(char *s, char c, int *i, char *tab)
{
	int		y;

	y = 0;
	while (s[*i + y] != c)
		y++;
	if ((tab = (char *)malloc(sizeof(tab) * y + 1)) == NULL)
		return (NULL);
	y = 0;
	while (s[*i] != c)
	{
		tab[y] = s[*i];
		y++;
		*i += 1;
	}
	tab[y] = '\0';
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	int		nbmo;
	char	**tab;
	int		i;
	int		y;

	nbmo = ft_nbmo((char *)s, c);
	if ((tab = (char **)malloc(sizeof(tab) * nbmo + 1)) == NULL)
		return (NULL);
	i = 0;
	y = 0;
	while (nbmo--)
	{
		while (s[i] == c && *s)
			i++;
		if (s[i] != '\0')
		{
			if ((tab[y] = ft_nbcar((char *)s, c, &i, tab[y])) == NULL)
				return (NULL);
		}
		y++;
	}
	tab[y][0] = '\0';
	return (tab);
}
