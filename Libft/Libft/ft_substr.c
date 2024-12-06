/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:41:35 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/29 16:29:54 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	string_len;
	size_t	i;

	if (!string)
		return (NULL);
	string_len = ft_strlen(string);
	if (start >= string_len)
		return (ft_strdup(""));
	if (len > string_len - start)
		len = string_len - start;
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = string[start + i];
		i++;
	}
	return (sub_str);
}
/*
int	main(void)
{
	char *result;
	result = ft_substr("Hard Candy Christmas", 6, 10);
	printf("This is the result of the ft_substr function: %s\n", result);
	free (result);
	return (0);
}
*/
