/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:15:15 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/18 21:08:51 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
convert a number to hexadecimal lowercase, return length counter
ft_print_ptr needs to handle LONG_MIN & LONG_MAX
use unsigned because addresses/ memory values cannot be negative (only zero or positive)
hexadecimal can represent large numbers, unsigned long helps to handle large values
can change type of ft_puthex_lower to int or unsigned int but...
	if handling pointers --> need to use unsigned long
	nb needs to be unsigned long because ft_print_ptr calls on ft_puthex_lower
*/
int	ft_puthex_lower(unsigned long nb)
{
	int		counter;
	char	*symbols;

	counter = 0;
	symbols = "0123456789abcdef";
	//base case: if nb is less than 16, print the character
	//part 3: convertion! print symbols at location of nb once nb is less than 16
	if (nb < 16)
		counter += ft_putchar(symbols[nb]);
	//recursive case: for larger values, break them down
	else
	{
		//part 1: unravel nb
		counter += ft_puthex_lower(nb / 16);
		counter += ft_puthex_lower(nb % 16);
		//part 2: go back up the stack to, take modulo then..
	}
	return (counter);
}
//convert a number to hexadecimal uppercase, return length counter
int	ft_puthex_upper(unsigned int nb)
{
	int		counter;
	char	*symbols;

	counter = 0;
	symbols = "0123456789ABCDEF";
	if (nb >= 16)
	{
		counter += ft_puthex_upper(nb / 16);
		counter += ft_puthex_upper(nb % 16);
	}
	else
		counter += ft_putchar(symbols[nb % 16]);
	return (counter);
}

/*
print value in hexadecimal format
unsigned long takes nb as an argument, represents a pointer
printing a pointer --> is an address in memory
to store pointer correctly, need to use unsigned long to account for size of pointer
use unsigned because addresses/ memory values cannot be negative (only zero or positive)
*/
int	ft_print_ptr(unsigned long nb)
{
	int		counter;

	counter = 0;
	//nb is an integer so to check for null pointer, need to check nb == 0
	if (nb == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	//print "0x" to indicate pointer, interpret pointer values as memory addresses
	//indicates number is written in hexadecimal format
	write(1, "0x", 2);
	counter += ft_puthex_lower(nb);
	//return +2 to include the 2 characters from "0x"
	return (counter + 2);
}
