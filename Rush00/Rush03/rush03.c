/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:09:08 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/06 15:46:35 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		row;
	int		col;
	char	to_put;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 && col == 0) || (row == y -1 && col == 0))
				to_put = 'A';
			else if ((row == 0 && col == x -1) || (row == y -1 && col == x -1))
				to_put = 'C';
			else if (row == 0 || row == y -1 || col == 0 || col == x -1)
				to_put = 'B';
			else
				to_put = ' ';
			ft_putchar(to_put);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
