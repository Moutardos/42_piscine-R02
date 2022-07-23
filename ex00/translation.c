/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:17:45 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 17:06:08 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "translation.h"
#include "utility.h"

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
void	display_numb(int nb, int pack, int size, dict *dict, int* fst_nb)
{
	int	current;
	int	counter;

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
}
char	*itoe(int nb, dict *dict)
{
	int size;
	int	pack;
	int	fst_nb;

	fst_nb = 1;
	size = len_nb(nb);
	pack = size/3;
	while (pack > 0)
	{
		display_numb(nb, pack, size, dict, &fst_nb);
		pack -= 1;
		nb /= 100;
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
