/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:13:42 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:13:46 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "search.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
char		*f_word(int lign, char *path)
{
	char	*val;
	char 	buf[1];
	int 	line_count;
	int 	file;
	int	i;

	val = malloc(sizeof(char) * 100 + 1);
	i = 0;
	line_count = 0;
	file = open(path, O_RDWR);
	read(file, buf, 1);
	while (line_count < lign && *buf != '\0')
	{
		if (*buf == '\n')
			line_count++;
		read(file, buf, 1);
	}
	while ((*buf >= '0' && *buf <= '9') && (*buf != '\n'))
	{
		val[i] = *buf;
		read(file, buf, 1);
		i++;
		
	}
	val[i] = '\0';
	close(file);
	return (val);
}

char		*l_word(int lign, char *path)
{
	int		i;
	char	*val;
	char 	buf[1];
	int 	line_count;
	int 	file;

	i = 0;
	val = malloc(sizeof(char) * 100 + 1);
	line_count = 0;
	file = open(path, O_RDWR);
	read(file, buf, 1);
	while (line_count < lign && *buf != '\0')
	{
		if (*buf == '\n')
			line_count++;
		read(file, buf, 1);
	}
	while ((!((*buf <= 'Z' && *buf >= 'A') || (*buf <= 'z' && *buf >= 'a'))) && (*buf != '\n'))
	{
		read(file, buf, 1);	
	}
	while (((*buf <= 'Z' && *buf >= 'A') || (*buf <= 'z' && *buf >= 'a')) && (*buf != '\n'))
	{
		val[i] = *buf;
		read(file, buf, 1);
		i++;
	}
	val[i] = '\0';
	close(file);
	return (val);
}
int nb_ligne(char *path)
{
	int		file;
	int		count;
	char	buf[1];
	int 	wc;

	file = open(path, O_RDWR);
	if (file == -1)
		return -1;
	count = 0;
	wc = read(file, buf, 1);
	while (wc > 0)
	{
		//write(1, buf, 1);
		if (*buf == '\n')
			count++;
		wc = read(file, buf, 1);
	}
	close(file);
	return count;
} 
