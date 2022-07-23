/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:17:01 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 14:59:47 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utility.h"

int	ft_strlen(char *str)
{
	int	count;
	
	count = 0;
	while (str[count] != '\0')
		count++;
	return count;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
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
