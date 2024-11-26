/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:19:35 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 16:21:53 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t dest_len;
	size_t src_len;
	size_t i;

	//get original length of dest and src
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;

	if (dest_len >= destsize)
		dest_len = destsize;

	/*if dest_len equals destsize
	no need to concat anything bc dest has max number of characters*/
	if (dest_len == destsize)
		return(destsize + src_len);

	//if destsize is big enough for src and dest
	//strlcat will append at most size - dest_len - 1 bytes
	while ((i < (destsize - dest_len - 1)) && src[i])
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = 0;
	//returns length of dst plus length of src
	//returns total length of the string it tried to create
	return(dest_len + src_len);
}

int	main(void)
{
	char dest[] = "42";
	char src[] = "Berlin";
	size_t result = ft_strlcat(dest, src, sizeof(dest));
	printf("%s\n", result);
	return(0);
}
