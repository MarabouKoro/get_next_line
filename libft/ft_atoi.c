/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:42:26 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/14 20:39:08 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_limit(int n, const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '-' && str[i] != '+' && str[i] < '0' && str[i] > '9')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i++;
	if (n == -1)
		if (i <= 19)
			return (1);
	if (n == 0)
		if (i <= 20)
			return (1);
	return (0);
}

static int	ft_islong(int len, const char *str)
{
	if (str[0] >= '0' && str[0] <= '9')
		if (len > 19 || (len == 19 && str[19] > '7'))
			return (-1);
	if (str[0] == '-')
		if (len > 20 || (len == 20 && str[20] > '8'))
			return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		res;
	int		len;

	i = 0;
	sign = 1;
	res = 0;
	len = ft_strlen(str);
	if (ft_islong(len, str) == -1 || ft_islong(len, str) == 0)
		if (ft_limit(ft_islong(len, str), str) == 0)
			return (ft_islong(len, str));
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
