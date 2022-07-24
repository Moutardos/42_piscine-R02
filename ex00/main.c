/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:16:54 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 17:22:03 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "condition.h"
#include "dictionary.h"
#include "display.h"
#include "gestion.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{

	dict	*dico;
	char* 	dictpath;
	char*	nb;
	int	file;
	
	if (ac > 3 || ac == 1)
	{
		ft_putstr("Error\n", NULL);
		return (1);
	}
	if (ac == 3)
	{
		dictpath = av[1];
		nb = av[2];
	}
	else
	{
		nb = av[1];
		dictpath = "numbers.dict";
	}
	if (!is_numb(nb))
		ft_putstr("Error\n", NULL);
	file = open(dictpath, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Dict Error\n", NULL);
		return (1);
	}
	close(file);
	dico = attribution(dictpath);
	display_number(dico, nb);
	return (0);
}
