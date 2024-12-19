/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_creation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahugi <ahugi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:20:20 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/12 16:21:47 by ahugi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_game_size(int *input)
{
	int	input_size;
	int	i;

	input_size = 0;
	i = 1;
	while (*input)
	{
		input_size = input_size + 1;
		input++;
	}
	while (i < input_size)
	{
		if (input_size / 4 == i)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	**ft_create_grid(int *input, int game_size)
{
	int	i;
	int	j;
	int	grid[100][100];
	int	**ptr_grid;
	int	*ptr_line1;
	
	ptr_grid = (int**)malloc(game_size * sizeof(int));
	ptr_line1 = &grid[0][0];
	ptr_grid = &ptr_line1;
	i = 0;
	j = 0;
	while (i < game_size)
	{
		while (j < game_size)
		{
			grid[j][i] = *input;
			//printf("number currently %i ", grid[j][i]);
			input++;
			j++;
		}
		j = 0; 
		i++;
	}
	return (ptr_grid);
}
/*
void	ft_grid_creation(int *input)
{
	int	**grid;

	grid = ft_create_grid(input, ft_game_size(*input));
}*/
