/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:19:54 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/02 11:06:30 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;
	i = 0;
	char str[] = "iloveclubbing";
	while(str[i] != '\0')
	{
		str[i] = str[i] - 32;
		i++;
	}
	printf("%s\n", str);
	return(0);
}
*/
