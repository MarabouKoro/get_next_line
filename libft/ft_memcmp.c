/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 23:06:29 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/15 12:50:00 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			i;
	const char	*ptr_s1;
	const char	*ptr_s2;

	i = 0;
	ptr_s1 = (const char *)s1;
	ptr_s2 = (const char *)s2;
	while (n > 0)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return ((unsigned char)ptr_s1[i] - (unsigned char)ptr_s2[i]);
		i++;
		n--;
	}
	return (0);
}
