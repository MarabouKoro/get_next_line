/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:19:29 by jcreux            #+#    #+#             */
/*   Updated: 2018/11/30 09:12:35 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strdup(const char *str)
{
	int		i;
	char	*new_str;

	i = 0;
	if (!(new_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
