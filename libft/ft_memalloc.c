/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <jcreux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 01:57:01 by jcreux            #+#    #+#             */
/*   Updated: 2018/12/14 01:58:05 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;
	char	*ptr;

	i = 0;
	if (!(mem = (void *)malloc(sizeof(size_t) * size)))
		return (NULL);
	ptr = mem;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (mem);
}
