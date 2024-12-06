/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:21:38 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/03 15:55:22 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	needle;
	size_t			i;

	str = (unsigned char *)s;
	needle = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (str[i] == needle)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "poker face";
	char c = 'b';
	char *result;

	result = ft_memchr(str, c, 10);
	if (result)
	{
		printf("The first occurence of 
		'%c' in '%s' is '%c'.\n", c , str, *result);
	}
	else
	{
		printf("The character '%c' was not found in string '%s'.\n", c , str);
	}
	return (0);
}
*/
