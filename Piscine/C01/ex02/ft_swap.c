/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:52:05 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/10 11:52:26 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	ft_swap(&num1, &num2);
	printf("The swapped numbers are: %d %d\n", num1, num2);
	return (0);
}*/
