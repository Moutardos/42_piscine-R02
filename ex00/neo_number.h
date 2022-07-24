/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neo_number.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loic <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:36:22 by loic              #+#    #+#             */
/*   Updated: 2022/07/24 13:56:17 by lcozdenm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	neo number is a number divided by pack of 3 int
//	1231 -> [[0,0,1],[2,3,1]];
typedef struct t_neo_number
{
	int	pack;
	int	*(value)[3];

} s_neo_number;

s_neo_number	*atonn()
