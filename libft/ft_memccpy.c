/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 00:49:35 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/15 12:17:29 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int			i;
	char		*ptr_dest;
	const char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	while ((size_t)i < n)
	{
		ptr_dest[i] = (unsigned char)ptr_src[i];
		if (ptr_dest[i] == (char)c)
			return (ptr_dest + i + 1);
		i++;
	}
	return (NULL);
}
