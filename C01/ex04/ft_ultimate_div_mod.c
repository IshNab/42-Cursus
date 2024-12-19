/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:56:57 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/10 12:50:42 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	first;
	int	second;

	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);
	ft_ultimate_div_mod(&first, &second);
	printf("The result and remainder are: %d %d\n", first, second);
	return (0);
}*/
