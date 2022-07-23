/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:16:30 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 15:07:55 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dictionary.h"
dict	*init_dict(int file, int capacity)
{
	dict	*dict;
	int		count;

	if (file == -1)
		return (NULL);
	dict = malloc(sizeof(dict));
	if (dict == NULL)
		return (NULL);
	dict->entries = malloc(sizeof(entry) * dict->capacity);
	if (dict->entries == NULL)
	{
		free(dict);
		return NULL;
	}
	count = 0;
	while (count < capacity)
	{
		//remplir le dict
		//dict[count]
		count++;
	}
	dict->capacity = capacity;
	return dict;
}

void	free_dict(dict *dict)
{
	free(dict->entries);
	free(dict);
}

int	index_of(dict *dict, int key)
{
	int count;

	count = 0;
	while (count < dict->capacity)
	{
		if (dict->entries[count].key == key)
			return (count);
		count++;
	}
	return  (-1);
}

/*
int	main(void)
{
	dict	*dico;
	dico = init_dict(0, 2);
	dico->entries[0].key = 1;
	dico->entries[1].key = 9;
	dico->entries[0].value = "GG";
	printf("key -> %d value ->%s\n", 1, dico->entries[index_of(dico, 1)].value);
}
*/
