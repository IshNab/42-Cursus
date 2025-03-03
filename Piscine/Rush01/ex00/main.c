/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:36:41 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 13:39:07 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1) Input Checker;
2) Split the input into an array of integers;

input : "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" 
*/
#include <unistd.h>

int		ft_input_checker(int arg_count, char *argum);
int		*ft_trim_atoi(char *s, char c);
int		ft_free(int **strs);
int		**ft_matrix_filler(int *str);
void	ft_print_matrix(int **matrix);
int		**ft_matrix_solution(int **matrix_flags);

int	main(int argc, char **argv)
{
	int	*input_adj;
	int	**matrix_input;
	int	**matrix_solution;

	if (ft_input_checker(argc, argv[1]) == 0)
	{
		input_adj = ft_trim_atoi(argv[1], ' ');
		matrix_input = ft_matrix_filler(input_adj);
		write(1, "Input Flags\n", 12);
		ft_print_matrix(matrix_input);
		write(1, "\n", 2);
		matrix_solution = ft_matrix_solution(matrix_input);
		write(1, "Initial Solution\n", 17);
		ft_print_matrix(matrix_solution);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	ft_free(matrix_input);
	return (0);
}
