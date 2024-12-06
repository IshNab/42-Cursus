/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:19:01 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/02 16:21:31 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dest_temp;
	char	*src_temp;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	dest_temp = (char *) dest;
	src_temp = (char *) src;
	i = 0;
	if (dest_temp < src_temp)
	{
		while (i < len)
		{
			dest_temp[i] = src_temp[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			dest_temp[len] = src_temp[len];
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[10];
	char src[] = "456 789";
	char dest_copy[10];
	char src_copy[] = "456 789";
	
	ft_memmove(dest, src, 6);
	printf("This is my version: %s\n", dest);
	
	memmove(dest_copy, src_copy, 6);
	printf("This is the library version after memmove: %s\n", dest_copy);
	
	return(0);
}
*/
