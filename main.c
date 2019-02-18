#include <fcntl.h>
#include <stdio.h>

#include "get_next_line.c"

int		main(void)
{
	int		fd = open("text.txt", O_RDONLY);
	char	*line;
	int		res;

	while ((res = get_next_line(fd, &line)) > 0)
	{
		printf("%d -- %s\n", res, line);
		free(line);
	}
	printf("%d\n", res);

	close (fd);
	return(0);
}
