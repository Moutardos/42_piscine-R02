/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neo_number.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcozdenm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:15:42 by lcozdenm          #+#    #+#             */
/*   Updated: 2022/07/24 23:15:44 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEO_NUMBER
#define NEO_NUMBER

//	neo number is a number divided by pack of 3 int
//	1231 -> [[0,0,1],[2,3,1]];
typedef struct t_neo_number
{
	int	pack;
	int	**(value);
} s_neo_number;

//	return the neo number associated to the str
//	(doesn't check wrong value)
s_neo_number	*atonn(char *str);

//	free the allocated nn
void	free_nn(s_neo_number *nn);

//	return nth pack of a str representing a nb 
int*	get_the_nth_pack(char *str, int n);
#endif
