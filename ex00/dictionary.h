/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:23:07 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 17:18:42 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# ifndef DICTIONARY
# define DICTIONARY
typedef	struct entry
{
	char	*key;
	char	*value;
} entry;

typedef struct dict
{
	int		capacity;
	entry	*entries;
}	dict;

//	initalize a dictionary of size capacity
dict	*init_dict(int capacity);

//	free the dictionary	
void	free_dict(dict *dict);

//	return the index of the entry key if in the dictionary
//	else -1
int	index_of(dict *dict, char *key);
#endif
