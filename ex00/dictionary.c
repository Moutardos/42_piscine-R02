/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:12:52 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:12:55 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dictionary.h"
#include "utility.h"

s_dict	*init_dict(int capacity)
{
	s_dict	*dict;
	int		count;

	dict = malloc(sizeof(dict));
	if (dict == NULL)
		return (NULL);
	dict->entries = malloc(sizeof(s_entry) * capacity);
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

void	free_dict(s_dict *dict)
{
	int	count;

	count = 0;
	while(count < dict->capacity)
	{
		free(dict->entries[count].key);
		free(dict->entries[count].value);
		count++;
	}
	free(dict->entries);
	free(dict);
}

int	index_of(s_dict *dict, char *key)
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
