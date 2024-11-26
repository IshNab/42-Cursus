/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:22:51 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 16:28:32 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while(*str == ' ' || (*str >= 9 && *str <= 13))  //skip all whitespaces
        str++;
    while (*str == '-' || *str == '+')   //skip pos and neg signs
    {
        if (*str == '-')
        {
            sign = -sign;   //if sign is negative --> turn to positive
        }
        str++;  //skip
    }
    while (*str >= '0' && *str <= '9')  //if we find a number
    {
        result = result * 10 + *str - '0';  //convert to an integer
        str++;
    }
    return (sign * result);
}
/*
#include <stdio.h>
int main(void)
{
    int result = ft_atoi("   --+--++---+95ab087");
	printf("%d\n", result);
	return(0);
}*/
