/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 21:13:30 by jcreux            #+#    #+#             */
/*   Updated: 2019/05/02 03:06:22 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

static char	*ft_line(int n, char *s, char *buffer)
{
	char	*s2;

	if (!(s2 = ft_strnew(ft_strlen(s) + n)))
	{
		free(s);
		return (NULL);
	}
	ft_strcat(s2, s);
	ft_strncat(s2, buffer, n);
	free(s);
	return (s2);
}

static char	*ft_fill_end_b(int n, char *s)
{
	int		i;
	char	*s2;

	i = 0;
	if (!(s2 = (char *)malloc(sizeof(char) * (BUFF_SIZE - n + 1))))
		return (NULL);
	while (s[n])
	{
		s2[i] = s[n];
		i++;
		n++;
	}
	s2[i] = '\0';
	return (s2);
}

static char	*ft_empty_end_b(char *s)
{
	int		i;
	int		res;
	char	*s2;

	i = 0;
	res = ft_strfind(s, '\n');
	if (res == -1)
		s2 = ft_strnew(ft_strlen(s));
	else
		s2 = ft_strnew(res);
	if (s != NULL)
		while (s[i])
		{
			if (s[i] == '\n')
			{
				s2[i] = '\0';
				free(s);
				return (s2);
			}
			s2[i] = s[i];
			i++;
		}
	free(s2);
	return (NULL);
}

int			ft_read(int fd, char *tmp, char **line, char **end_b)
{
	int		n;
	char	buffer[BUFF_SIZE + 1];

	while ((n = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[n] = '\0';
		if (ft_strfind(buffer, '\n') == -1)
			tmp = ft_line(n, tmp, buffer);
		else
		{
			*line = ft_line(ft_strfind(buffer, '\n'), tmp, buffer);
			tmp = ft_fill_end_b(ft_strfind(buffer, '\n') + 1, buffer);
			*end_b = tmp;
			return (1);
		}
	}
	if ((n == 0 && tmp[0] != '\0'))
	{
		*line = tmp;
		*end_b = NULL;
		return (1);
	}
	if (n == -1)
		return (-1);
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	char			*tmp;
	static t_struct	st = {NULL, -1};

	if (fd < 0 || line == NULL)
		return (-1);
	if (st.old_fd == -1)
		st.old_fd = fd;
	if (fd != st.old_fd)
		ft_memdel((void **)&(st.end_b));
	st.old_fd = fd;
	if (st.end_b == NULL)
		st.end_b = ft_strnew(0);
	tmp = ft_empty_end_b(st.end_b);
	if (tmp != NULL)
	{
		*line = tmp;
		st.end_b = ft_fill_end_b(ft_strfind(st.end_b, 10) + 1, st.end_b);
		return (1);
	}
	if (!st.end_b)
		return (-1);
	return (ft_read(fd, st.end_b, line, &(st.end_b)));
}
