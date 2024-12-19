/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:43:07 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/14 19:43:52 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[30];
	char	src[30];

	printf("Enter two words you want to append: ");
	scanf("%29s %29s", dest, src);
	ft_strcat(dest, src);
	printf("Here is your appended word: %s\n", dest);
	return (0);
}
