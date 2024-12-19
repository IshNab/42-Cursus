/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:09:45 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/06 20:44:37 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_up_bottom(int row, int col, int x, int y)
{
	if ((row == 0 && col == 0)
		|| (row == y -1 && col == x -1 && x != 1 && y != 1))
		ft_putchar('/');
	else if ((row == 0 && col == x - 1 && x != 1)
		|| (row == y - 1 && col == 0 && y != 1))
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	middle(int row, int col, int x, int y)
{
	if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		row;
	int		col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if (row == 0 || row == y -1)
			{
				print_up_bottom(row, col, x, y);
			}
			else
			{
				middle(row, col, x, y);
			}
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
