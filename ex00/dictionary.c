/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:16:30 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 17:18:19 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dictionary.h"
#include "utility.h"

dict	*init_dict(int capacity)
{
	dict	*dict;
	int		count;

	dict = malloc(sizeof(dict));
	if (dict == NULL)
		return (NULL);
	dict->entries = malloc(sizeof(entry) * capacity);
	if (dict->entries == NULL)
	{
		free(dict);
		return NULL;
	}
	count = 0;
	while (count < capacity)
	{
		//
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

int	index_of(dict *dict, char *key)
{
	int count;

	count = 0;
	while (count < dict->capacity)
	{
		if (ft_strcmp(dict->entries[count].key,key) == 0)
			return (count);
		count++;
	}
	return  (-1);
}
