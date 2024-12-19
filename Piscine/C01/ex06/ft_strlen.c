/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:20:05 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/09 17:27:05 by inabakka         ###   ########.fr       */
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
	char	str[25];
	int		length;

	printf("Enter a word: ");
	scanf("%s", str);
	length = ft_strlen(str);
	printf("Length of the string: %d\n", length);
	return (0);
}*/
