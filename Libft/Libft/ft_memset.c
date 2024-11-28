/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:16:58 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 16:16:31 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*temp;

	temp = s;
	if (s == NULL)
		return (NULL);
	while (len > 0)
	{
		*temp = c;
		temp++;
		len--;
	}
	return (s);
}
/*
int	main(void)
{
	char str[] = "Chemtrails";
	ft_memset(str, 'z', 5);
	printf("%s\n", str);
	return(0);	
}
*/
