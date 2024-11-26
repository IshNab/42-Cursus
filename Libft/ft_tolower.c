/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:20:07 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 16:23:57 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c) 
{
	if (c >= 'A' && c <= 'Z')
		{
			return c + 32;
		}
	return(c);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;
	i = 0;
	char str[] = "LANAdelREY";
	while(str[i] != '\0')
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	printf("%s\n", str);
	return(0);
}
*/
