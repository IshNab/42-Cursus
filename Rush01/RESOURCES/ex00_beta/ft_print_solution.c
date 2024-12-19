/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahugi <ahugi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:41:09 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/12 16:19:58 by ahugi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_game_size(int *input);
int	**ft_create_grid(int *input, int game_size);

void	ft_print_line(int *line)
{
	while (*line != '\0')
	{
		write(1, line, 1);
		write(1, " ", 1);
		line++;
	}
	write(1, "\n", 1);
}

void	ft_create_solution(int **solution_array)
{
	int	i;

	i = 0;
	while (*solution_array)
	{
		ft_print_line(*solution_array);
		solution_array++;
	}
}

int	main(void)
{	
	int	test[] = {1,2,3,4,1,2,3,4,1,2,3,4,4,3,2,1};
	int	**test2;

	test2 = ft_create_grid(test, 4);
	
	printf("array of arrays %d", test2[0][0]);
	
	ft_create_solution(test2);
	
	
	return (0);
}
