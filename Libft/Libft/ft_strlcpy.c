/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:19:13 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/28 17:16:04 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (!dest || !src || destsize == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (destsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*
int	main(void)
{
	char	dest_original[30];
	char	*src_original;

	src_original = "Hello darkness my old friend";
	ft_strlcpy(dest_original, src_original, 30);
	printf("%s\n", dest_original);
	return (0);
}
*/
