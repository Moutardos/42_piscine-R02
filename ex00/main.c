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
#include "dictionary.h"
#include "display.h"
#include "gestion.h"
int	main(int ac, char **av)
{

	dict	*dico;

	dico = attribution("numbers.dict");
	/*dico = init_dict(0, 5);
	dico->entries[2].key = "1000";
	dico->entries[0].key = "10";
	dico->entries[1].key = "100";
	dico->entries[3].key = "1";
	dico->entries[4].key = "1000000";
	dico->entries[0].value = "dix";
	dico->entries[1].value = "cent";
	dico->entries[2].value = "mille";
	dico->entries[3].value = "un";*/

	display_number(dico, av[1]);
}
