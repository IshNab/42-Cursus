/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:27:39 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/12 18:56:13 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*input;
	int		input_size;

	
	input = argv[1];
	input_size = 0;
	while (*input)
	{
		input_size = input_size + 1;
		input++;
	}
	if (argc == 2 && input_size == 31)
	{
		write(1, "great", 5);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return 0;
}
