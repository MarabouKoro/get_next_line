/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:18:42 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/16 16:18:12 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*ptr_dest;
	const char	*ptr_src;

	i = 0;
	ptr_dest = (char *)dest;
	ptr_src = (const char *)src;
	if (ptr_src < ptr_dest)
	{
		n--;
		while ((int)n >= 0)
		{
			ptr_dest[n] = ptr_src[n];
			n--;
		}
	}
	else
		while ((size_t)i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	return (dest);
}
