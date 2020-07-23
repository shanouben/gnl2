/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:52:53 by karibenn          #+#    #+#             */
/*   Updated: 2020/07/23 20:57:54 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_next_line.h"

int		ft_back(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\n')
		i++;
	return (i);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str)
		i++;
	return (i);
}

int ft_strnchr(char *str)
{
	int i;

	i = 0;
	while (str)
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

/*char *ft_strjoin(char *s1, char *s2)
{
	int i;
	int j;
	char *new;
	
	i = 0;
	j = 0;
	if (!(new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1)
	{
		new[i] = s1[i];
		i++;
	}
	free(s1);
	while(s2)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	free(s2);
	new[i] = '\0';
	return (new);
}*/
char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
    unsigned int i;
    int a;
    char *str2;

    i = len + 1;
    a = 0;
    if (!( str2 = malloc( sizeof(char) * (i + 1))))
        return NULL;
    while(start <= i)  
    {
        str2[a] = str[start];
        a++;
        start++;
    }  
    str2[a] = '\0';
    return (str2);
}

