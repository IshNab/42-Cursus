/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:29:27 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/20 11:39:53 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/*
#include <stdio.h>

int	main(void)
{
	int		result;
	char	str[] = "I love sweet potato dumplings!";

	result = ft_strlen(str);
	printf("The string is %d characters long\n", result);
	return (0);	
}*/
