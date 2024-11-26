/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:16:49 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/26 19:02:36 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[10] = "Habibi";
	int result;
	result = ft_strlen(str);
	printf("%d\n", result);
	return(0);
}
*/
