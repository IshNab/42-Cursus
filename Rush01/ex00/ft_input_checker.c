/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahugi <ahugi@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:35:30 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 11:05:47 by ahugi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
input will be a string a *char.

This will check if the input is valid.
example :"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"

1) Check if the number of arguments is 2.
2) Check if the length of the input is 32.
3) Check if numbers are separated by a space.
	3.1) Atoi first character is a number.
	3.2) second character is a space.
	...
	3.3) 31th character is a number.
*/

#include <stdio.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_num_space(char *str)
{
	int	i;

	i = 0;
	while (str[i + 1])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (str[i + 1] == ' ')
				i += 2;
			else
				return (1);
		}
		else
			return (1);
	}
	return (0);
}

int	ft_input_checker(int arg_count, char *argum)
{
	if (arg_count == 2 && ft_len(argum) == 31 && ft_num_space(argum) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
/*
int main(void)
{
	char *str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	printf("%d\n", ft_checker(2, str));
	return 0;
}*/
