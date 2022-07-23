/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:23:40 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/23 14:59:29 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UTILITY
#define UTILITY
//	return the length of a string
int	ft_strlen(char *str);

//	compare two string, 0 if equal;
int	ft_strcmp(char *s1, char *s2);

//	return 1 if character is blank
int	ft_isspace(char c);

//	numbers of digit in nb
int	len_nb(int nb);
#endif
