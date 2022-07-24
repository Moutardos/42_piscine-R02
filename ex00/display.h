/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:15:26 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:15:29 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DISPLAY
#define DISPLAY
#include "dictionary.h"
#include "neo_number.h"

//      Display the selected number (valid one) with the help of dico
int     display_number(s_dict *dico, char* num);

//      Display the nth pack of the neo number with the help of dico
int     display_nth_pack(s_dict *dico, s_neo_number *nn, int n, int *fst_nb);

//      Display the ten of the number, return 1 if it include the unit digit
int     display_ten(s_dict *dico, int *value, int *fst_nb);

//      Display the power of the pack
int     display_power(s_dict *dico, int pack, int *fst_nb);

void    ft_putstr(char *str, int *fst_nb);
#endif
