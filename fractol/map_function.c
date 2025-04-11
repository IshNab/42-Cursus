/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:49:01 by inabakka          #+#    #+#             */
/*   Updated: 2025/04/08 16:55:30 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
//#include "ft_printf.h"
#include <stdio.h>

double scale(double unscaled_num, double new_min, double new_max, double old_min, double old_max)
{
	return (new_max - new_min) * (unscaled_num - old_min) / (old_max - old_min) + new_min;
}

int main()
{
	//loop from 0 to 799 and scale the values in range -2 to +2
	for (int i = 0; i < 10; i++)
	{
		//what the fuck is %f and how can i use my own ft_printf
		printf("%d -> %f\n", i, scale((double)i, 0, 30, 0, 10));
	}
}
