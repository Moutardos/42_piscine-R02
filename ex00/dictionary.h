/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:23:07 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 13:10:07 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DICTIONARY
#define DICTIONARY
typedef	struct entry
{
	int		key;
	char	*value;
} entry;

typedef struct dict
{
	int		capacity;
	entry	*entries;
}	dict;

//	initalize a dictionary of size capacity
dict	*init_dict(int file, int capacity);

//	free the dictionary	
void	free_dict(dict *dict);

//	todo : table de hachage de tel sorte que dict->entries[key] renvoie
//		   la bonne entry
#endif
