/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_filler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:06:34 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 13:30:27 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Will receive a pointer to a matrix and fill it with the values 
from the input string.
Will receive as input a string of 16 char(numbers) 
without spaces. "4321122243211222"
It will creat a 2D array of integers and fill it with 
the values from the input string.
Each array will have 4 integers.
*/

#include <stdlib.h>
#include <stdio.h>

void	ft_line_swap(int *tab)
{
	int	temp;
	int	i;

	i = 0;
	while (i < 4 / 2)
	{
		temp = tab[4 - 1 - i];
		tab[4 - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}

int	*ft_matrix_swap(int **matrix)
{
	int	**matrix_buffer;
	int	i;

	i = 0;
	matrix_buffer = (int **)malloc(sizeof(int *) * 2);
	if (!matrix_buffer)
		return (NULL);
	while (i < 2)
	{
		matrix_buffer[i] = (int *)malloc(sizeof(int) * 4);
		if (!matrix_buffer[i])
		{
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		matrix_buffer[0][i] = matrix[1][i];
		matrix_buffer[1][i] = matrix[2][i];
		matrix[1][i] = matrix[3][i];
		matrix[2][i] = matrix_buffer[0][i];
		matrix[3][i] = matrix_buffer[1][i];
		i++;
	}
	ft_line_swap(matrix[1]);
	ft_line_swap(matrix[3]);
	return (0);
}

int	**ft_matrix_filler(int *str)
{
	int	**matrix;
	int	i;
	int	j;
	int	k;

	i = 0;
	matrix = (int **)malloc(sizeof(int *) * 4);
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		matrix[i] = (int *)malloc(sizeof(int) * 4);
		if (!matrix[i])
			return (NULL);
		j = 0;
		while (j < 4)
		{
			matrix[i][j] = str[k];
			j++;
			k++;
		}
		i++;
	}
	j = 0;
	/*col up, row right, col down, row left - each line - clockwise*/
	ft_matrix_swap(matrix);
	return (matrix);
}
/*
int main()
{
	char *str = "4321122243211222";
	int **matrix = matrix_filler(str);
	int i = 0;
	int j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("%d ", matrix[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}*/
