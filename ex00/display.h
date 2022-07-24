/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:23:26 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 19:52:37 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DISPLAY
#define DISPLAY
#include "dictionary.h"
#include "neo_number.h"

//      Display the selected number (valid one) with the help of dico
int     display_number(dict *dico, char* num);

//      Display the nth pack of the neo number with the help of dico
int     display_nth_pack(dict *dico, s_neo_number *nn, int n, int *fst_nb);

//      Display the ten of the number, return 1 if it include the unit digit
int     display_ten(dict *dico, int *value, int *fst_nb);

//      Display the power of the pack
int     display_power(dict *dico, int pack, int *fst_nb);

void    ft_putstr(char *str, int *fst_nb);
#endif