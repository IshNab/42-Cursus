/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:22:59 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/18 17:40:05 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printchar(int c);
static int	ft_print_format(char specifier, va_list ap);

int	ft_printf(const char *format, ...)
{
	//declare va_list to manage variable arguments
	va_list	ap;
	int		count;

	count = 0;
	//bc of va_start, ap is pointing to the 1st real argument
	//initialize va_list ap to start at the argument after 'format'
	va_start(ap, format);
	while (*format != '\0')
	{
		//if find % --> look at next element that defines type of variable argument
		if (*format == '%')
			/*
			increase str pointer then dereference it
			print_format handles all possible cases
			need to save all chars that are written
			so print_format returns amount of chars that are written
			*/
			count += ft_print_format(*(++format), ap);
		//write each character of the initial string
		else
			count += ft_printchar(*format);
		format++;
	}
	//clean up va_list ap after processing
	va_end (ap);
	return (count);
}

static int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	//print a single character
	if (specifier == 'c')
		//print_char gives back chars that are written
		//fetch int from ap (pointer)
		count += ft_putchar(va_arg(ap, int));
	//print a string
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	//void * pointer, printed in hexadecimal format (base 16)
	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(ap, unsigned long long));
	//print a decimal or integer base 10 number
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr((long)va_arg(ap, int));
	//print an unsigned decimal base 10 number
	else if (specifier == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	//print number in hexadecimal lowercase format (base 16)
	else if (specifier == 'x')
		count += ft_puthex_lower(va_arg(ap, unsigned int));
	//print number in hexadecimal uppercase format (base 16)
	else if (specifier == 'X')
		count += ft_puthex_upper(va_arg(ap, unsigned int));
	//print a percent sign
	else if (specifier == '%')
		count += ft_print_percent();
	//handle odd case specifier
	else
		count += write(1, &specifier, 1);
	return (count);
}
