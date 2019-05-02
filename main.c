#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.c"

int		main(int ac, char **av)
{
	(void)ac;
	int		fd = open(av[1], O_RDONLY);
	char	*line;
	int		res;

	while ((res = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%d\n", res);

	close (fd);
	return(0);
}
