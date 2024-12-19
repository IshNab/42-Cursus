/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:13:33 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/14 16:00:16 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	swap;

	while (size >= 0)
	{
		start = 0;
		while (start < size - 1)
		{
			if (tab[start] > tab[start + 1])
			{
				swap = tab[start];
				tab[start] = tab[start + 1];
				tab[start + 1] = swap;
			}
			start++;
		}
		size--;
	}
}

int	main()
{
	int tab[10] = {5, 1, 3, 9, 4, 0, 7, 2, 6, 8};
	int size = 10;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", 
		tab[0], tab[1], tab[2], tab[3], tab[4], 
			tab[5], tab[6], tab[7], tab[8], tab[9]);
	return (0);
}
