/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:20:21 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 16:24:39 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			needle;

	i = 0;
	needle = (char) c;
	while (str[i] != '\0')
	{
		if (str[i] == needle)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == needle)
		return ((char *) &str[i]);
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "poker face";
	char c = 'e';
	char *result;

	result = ft_strchr(str, c);
	printf("The first occurence of '%c' in '%s' is '%c'\n", c, str, *result);
	return(0);
}
*/
