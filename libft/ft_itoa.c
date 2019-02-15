/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:29:57 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/14 01:44:59 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_rank(int n)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < ft_intlen(n) - 1)
	{
		res = res * 10;
		i++;
	}
	res = n / res;
	return (res);
}

static int	ft_intnew(int n)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < ft_intlen(n) - 1)
	{
		res = res * 10;
		i++;
	}
	return (n - (res * ft_rank(n)));
}

static char	*ft_intmin(void)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_intlen(n);
	if (!(str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1))))
		return (NULL);
	if (n == -2147483648)
		return (ft_intmin());
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	while (i < j)
	{
		while (j - i != ft_intlen(n))
			str[i++] = '0';
		str[i++] = ft_rank(n) + '0';
		n = ft_intnew(n);
	}
	str[i++] = '\0';
	return (str);
}
