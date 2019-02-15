/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:40:35 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/14 05:28:54 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr_s;

	i = 0;
	ptr_s = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			return (ptr_s + i);
		i++;
	}
	if (c == '\0')
		return (ptr_s + i);
	return (NULL);
}
