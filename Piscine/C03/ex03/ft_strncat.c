/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:44:32 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/14 19:45:20 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[30] = "Sweet";
	char	src[30] = "Potato Dumpling";
	unsigned int nb = 5;
	
	printf("Enter two words you want to append: ");
	scanf("%29s %29s", dest, src);
	
	char dest_copy[30];
	strcpy(dest_copy, dest);
	ft_strncat(dest, src, nb);
	
	printf("This is my version: %s\n", dest);
	printf("This is the standard version: %s\n", strncat(dest_copy, src, nb));
	return (0);
}*/
