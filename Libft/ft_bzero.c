/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:17:15 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 16:17:59 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i <= n)
	{
		str[i] = '\0';
		i++;
	}
	return ;
}
/*
int	main(void)
{
	char	str[30] = "Fools and fools";
	size_t	n = 5;
	ft_bzero(str, n);
	printf("%s\n", str);
	return (0);
}
*/
