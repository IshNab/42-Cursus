/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:02:36 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/18 18:45:36 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
write char and iterate forward
for printing unsigned integer %u
length needs to be a pointer because function needs to modify value of length outside of function
pass memory address of length rather than its value
*/
void	ft_putchar_length(char character, int *length)
{
	write(1, &character, 1);
	(*length)++;//increment the value that length points to
}

/*
format as an unsigned decimal integer
converts from an int to ascii
unsigned integer means variable can only hold a positive value
function designed to print positive integers
*/
int	ft_print_unsigned(unsigned int u)
{
	int	length;

	length = 0;
	if (u >= 10)
	{
		//recursive call, increment length
		length += ft_print_unsigned(u / 10);
	}
	//print the current digit and increment length
	ft_putchar_length(u % 10 + '0', &length);
	return (length);
}

