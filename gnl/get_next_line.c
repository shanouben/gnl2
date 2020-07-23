/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:52:15 by karibenn          #+#    #+#             */
/*   Updated: 2020/07/23 21:05:28 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <string.h>

int get_next_line(int fd, char **line)
{
	int ret;
	char *buff;
	static char *memoire;
	char *tmp;
	size_t pos = 0;

	memoire = NULL;
	/*if (memoire)
	{
		free(memoire);
		memoire = NULL;
	}*/
	printf("hello\n");
	if (!(buff = (char*)malloc(sizeof(char)* BUFFER_SIZE + 1)))
		return (-1);
	while ((ret = read(fd,buff, BUFFER_SIZE)) > 0 /*&& (pos = ft_strnchr(buff)) != -1*/)
	{
		buff[ret] = '\0';
		printf("%s",buff);
		if (memoire == NULL)
			memoire = ft_strjoin("",buff);
		else
			memoire = ft_strjoin(memoire, buff);
		printf("%s",memoire);
	} 
	free(buff);
	*line = ft_substr(memoire, 0, pos);
	tmp = strdup(memoire + pos + 1);
	free(memoire);
	return(1);	
} 
		
int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	int		i;
	char	*line;

	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	line = NULL;
	i = 0;
	while ((ret = get_next_line(fd, &line)))
	{
		printf("%d -> [%s]\n", ret, line);
		free(line);
		sleep(1);
		i++;
	}
	printf("final %d -> [%s]\n", ret, line);
	free(line);
	close(fd);
	return (0);
}
