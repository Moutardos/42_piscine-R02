/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <loic.cozdenmat@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:24:33 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 20:24:38 by lcozdenm         ###   ########.fr       */
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

