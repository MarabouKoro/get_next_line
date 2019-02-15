/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 20:18:10 by jcreux            #+#    #+#             */
/*   Updated: 2019/02/15 13:20:46 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <stdlib.h>

# define BUFF_SIZE 32

typedef struct	s_list
{
	char	*end_b;
	int		old_fd;
}				t_struct;

int				get_next_line(const int fd, char **line);

#endif
