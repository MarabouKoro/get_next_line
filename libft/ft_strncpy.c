/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 01:12:41 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/15 14:13:51 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (src[i] && (size_t)i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while ((size_t)i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
