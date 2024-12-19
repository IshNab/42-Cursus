/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:10:45 by thdinh            #+#    #+#             */
/*   Updated: 2024/10/07 12:08:55 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char	put;
	int		row;
	int		col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 || row == y -1) && (col == 0 || col == x -1))
				put = 'o';
			else if (row == 0 || row == y -1)
				put = '-';
			else if (col == 0 || col == x -1)
				put = '|';
			else
				put = ' ';
			ft_putchar(put);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
