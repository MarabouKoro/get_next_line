#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#include "get_next_line.h"

int		main(void)
{
	int		fd = open("text.txt", O_RDONLY);
	char	*line;
	int		res;

	while ((res = get_next_line(fd, &line)) > 0)
		printf("%s\n", line);
	printf("%d\n", res);

	close(fd);
	return (0);
}
