/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:15:55 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/09 21:54:33 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while ((unsigned char)str1[i] == (unsigned char)str2[i] && str1[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
