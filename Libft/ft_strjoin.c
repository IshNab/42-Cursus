/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:41:45 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/26 21:13:27 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new)
		return (NULL);
	ft_strcpy(new, s1);
	ft_strcpy(new + len1, s2);
	return (new);
}
/*
int main(void)
{
	char *result;
	char *string1 = "Hard Candy";
	char *string2 = "Christmas";

	result = ft_strjoin(string1, string2);
	if (result == NULL)
		printf("Memory allocation failed!\n");
		return(1);
	printf("The result of joining '%s' and '%s' together is '%s'.\n", 
		string1, string2, result);
	free(result);
	return(0);
}
*/
