/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:15:49 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:15:52 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SEARCH
# define SEARCH

//	take the word on the left in dict
char		*f_word(int lign, char *path);

//	take the word on the right in dict
char		*l_word(int lign, char *path);

//	number of line in file path
int nb_ligne(char *path);
#endif

