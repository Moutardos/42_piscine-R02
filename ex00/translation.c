/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:17:45 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 15:00:05 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "translation.h"

int	ft_atoi(char *str)
{
	int	is_neg;
	int	result;

	result = 0;
	is_neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg = -1;
		str++;
	}
	is_neg = nb_of_negative(&str);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (result);
		result *= 10;
		result += (*str - '0') * is_neg;
		str++;
	}
	return (result);	
}

char	*itoe(int nb, dict *dict)
{
	//	
}
