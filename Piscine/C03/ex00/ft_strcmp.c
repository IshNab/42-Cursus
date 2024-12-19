/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:36:09 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/15 14:33:50 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int		result;
	char	string1[30];
	char	string2[30];
	
	printf("Please enter two words: ");
	scanf("%s %s", string1, string2);

	result = ft_strcmp(string1, string2);
	printf("Value: %d\n", result);
	
	return (0);
}*/
