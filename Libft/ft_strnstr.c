/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:22:08 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/26 17:22:42 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0] || needle == NULL)
		return ((char *)haystack);
	if (n == 0)
		return (NULL);
	while (i < n && haystack[i])
	{
		j = 0;
		while ((i + j < n) && needle[j] && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main (int argc, char **argv)
{
	char	*haystack = "sweet potatoe pie is the best";
	char	*needle = "pie";

	printf("%s\n", ft_strnstr(haystack, needle, 20));
	return (0);
}
*/
