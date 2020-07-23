/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:52:35 by karibenn          #+#    #+#             */
/*   Updated: 2020/07/23 21:04:00 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
#define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>


int get_next_line(int fd, char **line);
void	*ft_calloc(size_t count, size_t size);
char *ft_substr(char const *str,unsigned int start,size_t len);
char *ft_strdup(char *str);
int	ft_strchr(char *str, char c);
char *ft_strjoin(char *s1, char *s2);
int	ft_strlen(char *str);


#endif


