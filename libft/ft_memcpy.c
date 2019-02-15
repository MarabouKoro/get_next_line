/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:06:41 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/15 09:56:15 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	int			i;
	char		*ptr_str1;
	const char	*ptr_str2;

	i = 0;
	ptr_str1 = (char *)str1;
	ptr_str2 = (const char *)str2;
	while ((size_t)i < n)
	{
		ptr_str1[i] = ptr_str2[i];
		i++;
	}
	return (str1);
}
