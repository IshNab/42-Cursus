/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:06:04 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/22 12:47:23 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	product;

	product = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		product = product * nb;
		power--;
	}
	return (product);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb;
	int power;
	int result;

	nb = 7;
	power = 2;
	result = ft_iterative_power(nb, power);
	printf("%d\n", result);
	return (0);
}*/
