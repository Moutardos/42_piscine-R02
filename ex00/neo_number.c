/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neo_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:13:33 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:13:38 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "neo_number.h"
#include "utility.h"
#include <stdlib.h>
#include <stdio.h>

s_neo_number	*atonn(char *str)
{
	int	pack;
	s_neo_number	*nn;
	int	count;

	pack = (ft_strlen(str) - 1) / 3;
	nn = malloc(sizeof(nn));
	if (nn == NULL)
		return (NULL);
	nn->pack = pack;
	nn->value = malloc(sizeof(int *) * pack + 1);
	if (nn->value == NULL)
		return (NULL);
	count = 0;
	while (count <= nn->pack)
	{
		nn->value[count] = get_the_nth_pack(str, pack);
		count++;
		pack--;
	}
	return (nn);
}

int	*get_the_nth_pack(char *str, int n)
{
	int	count;
	int	pack_count;
	int	*pack;
	int	pos;
	int	str_pos;

	pack_count = 0;
	count = 0;
	pos = 2;
	str_pos = ft_strlen(str) - 1;
	pack = malloc (sizeof(int) * 3);
	if (pack == NULL)
		return (NULL);
	while (str_pos >= 0 && pack_count <= n)
	{
		if (count % 3 == 0 && count != 0)
			pack_count++;
		if (pack_count == n)
			pack[pos--] = str[str_pos] - '0';
		str_pos--;
		count++;
	}
	while (pos >= 0)
		pack[pos--] = 0;
	return (pack);
}

void	free_nn(s_neo_number *nn)
{
	int	counter;

	counter = 0;
	while (counter <= nn->pack)
	{
		free(nn->value[counter]);
		counter++;
	}
	free(nn->value);
	free(nn);
}
