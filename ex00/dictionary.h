/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:15:13 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:15:17 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# ifndef DICTIONARY
# define DICTIONARY
typedef	struct t_entry
{
	char	*key;
	char	*value;
} s_entry;

typedef struct t_dict
{
	int		capacity;
	s_entry	*entries;
}	s_dict;

//	initalize a dictionary of size capacity
s_dict	*init_dict(int capacity);

//	free the dictionary	
void	free_dict(s_dict *s_dict);

//	return the index of the entry key if in the dictionary
//	else -1
int	index_of(s_dict *s_dict, char *key);
#endif
