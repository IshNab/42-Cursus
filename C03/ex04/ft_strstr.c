/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:45:48 by inabakka          #+#    #+#             */
/*   Updated: 2024/10/14 19:46:34 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str != *b)
		{
			str++;
			continue ;
		}
		a = str;
		while (1)
		{
			if (*b == '\0')
				return (str);
			else if (*a++ != *b++)
				break ;
		}
		b = to_find;
	}
	return (0);
}

int main(void)
{
    char str[] = "hello there how are you";
    char sub_str[] = "are";
    char *p;

    p = ft_strstr(str, sub_str);
    printf("The first occurrence of '%s' in '%s' is '%s'\n", sub_str, str, p);
    return 0;
}
