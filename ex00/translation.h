/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:23:31 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 14:55:41 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef TRANSLATION
#define TRANSLATION
#include "dictionary.h"
//	ascii to integer
int	ft_atoi(char *str);

//	integer to english
char	*itoe(int nb, dict *dict);
#endif
