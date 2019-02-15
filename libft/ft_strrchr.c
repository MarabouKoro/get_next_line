/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 01:58:45 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/15 09:18:29 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*ptr_s;

	i = 0;
	j = -1;
	ptr_s = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return (ptr_s + i);
	else if (j == -1)
		return (NULL);
	return (ptr_s + j);
}
