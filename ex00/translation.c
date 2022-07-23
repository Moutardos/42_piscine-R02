/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:17:45 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 19:30:24 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "translation.h"
#include "utility.h"
#include <stdio.h>
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

int	get_the_nth_nb(int nb, int n)
{
	int res;
	int count;
	int	power;
	int	current;

	count = 0;
	res = 0;
	while (count < n)
	{
		power = 0;
		current = nb;
		while (power < n - count - 1)
		{
			power++;
			current /= 10;
		}
		res *= 10;
		res += current % 10;
		count++;
	}
	return res;
}
void	display_numb(int nb, int pack, int size, dict *dict, int* fst_nb)
{
	int	current;
	int	counter;
	int res;

	counter = 0;
	current = nb;
	if (size % 3 == 0)
	{
		while (counter++ < pack);
			current /= 100;
		if (current > 1)
			ft_putstr(dict->entries[index_of(dict, current)].value, fst_nb);
		ft_putstr(dict->entries[index_of(dict, 100)].value, fst_nb);
	}
	counter = 0;
	res = 1;
	while (counter++ < pack)
		res *= 1000;
	printf("\nDEBUG:%d \n", res);
	if (res > 1)
		ft_putstr(dict->entries[index_of(dict, res)].value, fst_nb);
}
char	*itoe(int nb, dict *dict)
{
	int size;
	int	pack;
	int	fst_nb;

	fst_nb = 1;
	size = len_nb(nb);
	pack = (size - 1)/3;
	printf("nb : %d; size : %d; pack : %d", nb, size, pack);
	while (pack >= 0)
	{
		display_numb(nb, pack, size, dict, &fst_nb);
		pack -=1;
		nb /= 10;
		size = len_nb(nb);
		while (size % 3 != 0 && size != 1) 
		{
			nb %= 10;
			size = len_nb(nb);
		}
	}
}

int	main(int ac, char **av)
{
	dict	*dico;
	dico = init_dict(0, 4);
	dico->entries[0].key = 1;
	dico->entries[1].key = 2;
	dico->entries[2].key = 100;
	dico->entries[3].key = 1000;
	dico->entries[0].value = "one";
	dico->entries[1].value = "two";
	dico->entries[2].value = "hundred";
	dico->entries[3].value = "thousand";
	itoe(ft_atoi(av[1]), dico);	
}
