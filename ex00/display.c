/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:13:01 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:13:04 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"
#include "utility.h"
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putstr(char *str, int *fst_nb)
{
	if (fst_nb != NULL)
	{
		if (*fst_nb)
			*fst_nb = 0;
		else
			write(1, " ", 1);
	}
	while (*str != '\0')
		write(1, str++, 1);
}

int	display_number(s_dict *dico, char* num)
{
	s_neo_number	*nn;
	int		counter;
	int		fst_nb;

	fst_nb = 1;
	nn = atonn(num);
	if (nn == NULL)
	{
		free_nn(nn);
		return (-1);
	}
	counter = 0;
	if (nn->pack == 0 && nn->value[0][0] == 0 && nn->value[0][1] == 0
	&& nn->value[0][2] == 0)
	{
		ft_putstr(dico->entries[index_of(dico, "0")].value, &fst_nb);;
		return (0);
	}
	while(counter <= nn->pack)
		display_nth_pack(dico, nn, counter++, &fst_nb);
	free_dict(dico);
	free_nn(nn);
	return (0);
}

int	display_nth_pack(s_dict *dico, s_neo_number *nn, int n, int *fst_nb)
{
	int	*curr;
	char	digit[2];
	
	curr = nn->value[n];
	if (curr[0] != 0)
	{
		if (curr[0] != 1)
		{
			digit[0] = curr[0] + '0';
			digit[1] = '\0';
			ft_putstr(dico->entries[index_of(dico, digit)].value, fst_nb);
		}
		ft_putstr(dico->entries[index_of(dico, "100")].value, fst_nb);
	}
	if (!display_ten(dico, curr, fst_nb))
	{	
		if ((curr[2] != 0))
		{
			digit[0] = curr[2] + '0';
			digit[1] = '\0';
			ft_putstr(dico->entries[index_of(dico, digit)].value, fst_nb);
		}
	}
	display_power(dico, nn->pack - n, fst_nb);
	return (0);
}

int	display_ten(s_dict *dico, int *value, int *fst_nb)
{
	char	digit2[3];
	
	digit2[0] = value[1] + '0';
	digit2[1] = value[2] + '0';
	digit2[2] = '\0';
	if (index_of(dico, digit2) != -1)
	{
		ft_putstr(dico->entries[index_of(dico, digit2)].value, fst_nb);
		return (1);
	}
	if (value[1] != 0)
	{
		digit2[1] = '0';
		ft_putstr(dico->entries[index_of(dico, digit2)].value, fst_nb);
	}
	return (0);;
}

int	display_power(s_dict *dico, int pack, int *fst_nb)
{
	int	count;
	int	index;
	char	*res;
	
	if (pack == 0)
		return (0);
	count = 1;
	res = malloc(sizeof(char) * pack * 3 + 1);
	if (res == NULL)
		return (-1);
	res[0] = '1';
	while (count <= pack * 3)
		res[count++] = '0';
	res[count] = '\0';
	index = index_of(dico, res);
	if (index != -1)
		ft_putstr(dico->entries[index].value, fst_nb);
	free(res);
	return (0);
}
