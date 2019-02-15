/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:06:11 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/15 09:04:35 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[i])
	{
		if (str1[i] == str2[j])
		{
			tmp = i;
			while (str1[i++] == str2[j++])
				if (str2[j] == '\0')
					return ((char *)&str1[tmp]);
			j = 0;
			i = tmp;
		}
		i++;
	}
	return (NULL);
}
