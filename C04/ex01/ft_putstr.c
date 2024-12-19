/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */c
/*   Created: 2024/10/20 11:40:28 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/20 11:54:57 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putstr(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                write (1, &str[i], 1);
                i++;
        }
}

/*
int	main(void)
{
	char	*str;

	str = "Berlin\n";
	ft_putstr(str);
	return (0);
}*/
