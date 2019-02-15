/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 00:57:35 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/17 08:09:35 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_lentab(char const *s, char c)
{
	int	i;
	int len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			len++;
		i++;
	}
	return (len);
}

static int	ft_l(char const *str, int n, char c)
{
	int	i;

	i = 0;
	while (str[n] != c && str[n])
	{
		n++;
		i++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (ft_lentab(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			if (!(tab[j] = (char *)malloc(sizeof(char) * (ft_l(s, i, c) + 1))))
				return (NULL);
			while (s[i] != c && s[i])
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
