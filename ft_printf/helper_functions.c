/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:02:17 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/18 21:10:59 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//to print a percent
int	ft_print_percent(void)
{
	//return 1 because printf needs to return how many characters where printed
	return (write(1, "%", 1));
}
//to print a character
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
//to print a string
int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	//if string does not exist, just write (null)
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (*str)
	{
		count += write (1, str, 1);
		str++;
	}
	return (count);
}
//to print a number
int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar(nb % 10 + '0');
	}
	else
	{
		count += ft_putchar(nb + '0');
	}
	return (count);
}
