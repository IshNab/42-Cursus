/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:30:44 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/04 12:45:09 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		n = 'P';
		write (1, &n, 1);
	}
	else
	{
		n = 'N';
		write (1, &n, 1);
	}
}

/*int	main(void)
{
	ft_is_negative (-56);
	write (1, "\n", 1);
	return (0);
}*/
