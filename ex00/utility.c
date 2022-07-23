/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:17:01 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 17:08:47 by lcozdenm         ###   ########.fr       */
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

void	ft_putstr(char *str, int *fst_nb)
{
	if (*fst_nb)
		*fst_nb = 0;
	else
		write(1, " ", 1);
	while (*str != '\0')
		write(1, str++, 1);
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
