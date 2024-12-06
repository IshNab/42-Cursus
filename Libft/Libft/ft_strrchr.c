/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:20:37 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/28 17:11:19 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char			needle;
	char			*result;

	needle = (char ) c;
	result = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == needle)
			result = (char *) &str[i];
		i++;
	}
	if (str[i] == needle)
		result = ((char *) &str[i]);
	return (result);
}
/*
int main(void)
{
	char str[] = "sweet potato dumplings";
	char needle = 'z';
	char *result;

	result = ft_strrchr(str, needle);
	//need to print *result as a pointer to display character at that position
	//result is a pointer, not the actual character
	if (result != NULL)
		printf("The last occurence of '%c' in the string '%s' is '%c'.\n", 
			needle, str, *result);
	else
		printf("The character you are searching for 
		does not exist in the string.\n");
	return (0);
}
*/
