/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:47:07 by inabakka          #+#    #+#             */
/*   Updated: 2024/12/02 11:53:37 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_unwanted(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	first_position(char const *str, const char *set)
{
	int	i;

	i = 0;
	while (str[i] && is_unwanted(str[i], set))
		i++;
	return (i);
}

static int	last_position(char const *str, const char *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0 && is_unwanted(str[i], set))
		i--;
	return (i);
}

static int	trim_len(char const *str, const char *set)
{
	int	start;
	int	end;

	start = first_position(str, set);
	end = last_position(str, set);
	if (end < start)
		return (0);
	return (end - start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cut_str;
	int		i;
	int		len;
	int		start;
	int		end;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = trim_len(s1, set);
	if (len == 0)
		return (ft_strdup(""));
	cut_str = (char *)malloc(len + 1);
	if (!cut_str)
		return (NULL);
	start = first_position(s1, set);
	end = last_position(s1, set);
	while (start <= end)
	{
		cut_str[i] = s1[start];
		i++;
		start++;
	}
	cut_str[i] = '\0';
	return (cut_str);
}
/*
int	main(void)
{
	char *result;
	char *s1 = "zzzzabracadabrazzzz";
	char *set = 'z';
	printf("The original string is: %s.\n", s1);
	result = ft_strtrim(s1, set);
	printf("The trimmed string is: %s.\n", result);
	return(0);
}
*/
