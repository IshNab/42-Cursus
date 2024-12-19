/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:41:25 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/14 19:42:21 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int				result;
	char			string1[30];
	char			string2[30];
	unsigned int	n = 3;

	printf("Please enter two words: ");
	scanf("%s %s", string1, string2);

	result = ft_strncmp(string1, string2, n);
	printf("Value: %d\n", result);

	return (0);
}*/
