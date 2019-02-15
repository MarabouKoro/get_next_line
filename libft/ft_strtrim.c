/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 02:49:40 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/16 18:48:17 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nbws(char const *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
	{
		len++;
		i++;
	}
	if (str[i] != '\0')
	{
		while (str[i])
			i++;
		i--;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			len++;
			i--;
		}
	}
	return (len);
}

static int	ft_start(char const *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	return (i);
}

static int	ft_end(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i--;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) - ft_nbws(s) + 1))))
		return (NULL);
	while (s[i])
	{
		if (i >= ft_start(s) && i <= ft_end(s))
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
