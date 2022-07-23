/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:16:30 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 14:55:08 by lcozdenm         ###   ########.fr       */
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
