/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahugi <ahugi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:40:51 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/12 17:04:46 by ahugi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_remove_element(char *input)
{
	while (*input)
	{
		*input = *(input + 1);
		ft_remove_element(input + 1);
		break;
	}
}

char	*ft_trim(char *input)
{
	char	*start;

	start = input;
	while (*input)
	{
		if (*input == ' ')
		{
			ft_remove_element(input);
		}
		input++;
	}
	return (start);
}
/*
int	main(void)
{
	char	test[] = "hello world, how are you?";
	ft_trim(test);

	printf("it has become %s\n", ft_trim(test));
}*/
