/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:17:25 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 16:18:50 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	if (dest == NULL || src == NULL)
		return (dest);
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	while (n > 0)
	{
		*dest_temp = *src_temp;
		dest_temp++;
		src_temp++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[10];
	char src[] = "Berlin";
	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
	return(0);
}
*/
