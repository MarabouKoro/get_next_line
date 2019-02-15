/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:48:30 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/17 09:05:24 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while ((unsigned char)str1[i] == (unsigned char)str2[i] && n > 0)
	{
		if (str1[i] == '\0' || str2[i] == '\0')
			return (0);
		n--;
		i++;
	}
	if (n == 0)
	{
		i--;
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
