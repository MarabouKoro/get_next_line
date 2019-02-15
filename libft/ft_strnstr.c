/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:44:12 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/14 05:29:25 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	unsigned int	i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (i < len)
	{
		if (str1[i] == str2[j])
		{
			k = i;
			while (str1[i] == str2[j] && i < len)
			{
				i++;
				j++;
				if (str2[j] == '\0')
					return ((char *)&str1[k]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
