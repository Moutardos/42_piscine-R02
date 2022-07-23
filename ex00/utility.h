/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:23:40 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 17:05:53 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UTILITY
#define UTILITY
//	return the length of a string
int	ft_strlen(char *str);

//	output str, if fst_nb is 0, it doesnt do a space
void	ft_putstr(char *str, int *fst_nb);

//	return 1 if character is blank
int	ft_isspace(char c);

//	numbers of digit in nb
int	len_nb(int nb);
#endif
