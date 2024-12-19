/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:13:47 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/10 11:57:30 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	
	ft_div_mod(360, 9, &num1, &num2);
	if (num1 > 0 || num2 > 0)
	{
		printf("The result and the remainder are: %d and %d\n", num1, num2);
	}
	else
	{
		printf("Please enter positive integers only!\n");
	}
	return (0);
}*/
