/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:14:06 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:14:09 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utility.h"
#include <unistd.h>
int	ft_strlen(char *str)
{
	int	count;
	
	count = 0;
	while (str[count] != '\0')
		count++;
	return count;
}

int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	else
		return (c == '\v' || c == '\t' || c == '\n' || c == '\f' || c == '\r');
}

int	len_nb(int nb)
{
	int	size;

	size = 1;
	while (nb > 9)
	{
		nb /= 10;
		size++;
	}
	return size;
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
