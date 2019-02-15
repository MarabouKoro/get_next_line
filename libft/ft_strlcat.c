/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 04:35:08 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/17 11:10:22 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = -1;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (len_d < size)
	{
		while (len_d + ++i < size - 1 && src[i])
		{
			dest[len_d + i] = src[i];
		}
		dest[len_d + i] = '\0';
		return (len_d + len_s);
	}
	else
	{
		while (len_d + ++i < size)
		{
			dest[len_d + i] = src[i];
		}
		dest[len_d + i] = '\0';
		return (size + len_s);
	}
}
