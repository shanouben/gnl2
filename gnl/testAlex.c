#include "get_next_line.h"
#include <string.h>

int ouvriretread (const char *str, char **line)
{
	int fd;
	char buff[BUFFER_SIZE + 1];
	static char *join = NULL;
	int rd;
	int i;
	int pos;

	i = 0;
	fd = open(str, O_RDONLY);
	buff[0] = '\0';
	if (join)
	{
		free(join);
		join = NULL;
	}
	while ((rd = read(fd, buff, BUFFER_SIZE)) > 0 && (pos = ft_strnchr(buff)) != 1) 
	{
		buff[rd] = '\0';
		printf("pos = %d\n", pos);
		*line = ft_strnjoin(*line, buff);
		printf("line sans le n= %s\n", *line);
	
	}
	*line = ft_strnjoin(*line, buff);
	printf("line avec le n= %s\n", *line);
	join = ft_strdup(buff + pos + 1);
	printf("join avec n= %s\n", join);
	return (rd);
}


int main(int ac, char **av)
{
	(void)ac;
	char	*line;
	int		ret;
	int fd;

	fd = open(av[1], O_RDONLY);
	ret = ouvriretread(av[1], &line);
	printf("return = %d line = %s\n", ret, line);	
	return (0);
}