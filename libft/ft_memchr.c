/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:48:55 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/17 09:08:45 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr_s;

	i = 0;
	ptr_s = s;
	while (i < n)
	{
		if ((unsigned char)ptr_s[i] == (unsigned char)c)
			return ((void *)(ptr_s + i));
		i++;
	}
	return (NULL);
}
