/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:38:35 by inabakka          #+#    #+#             */
/*   Updated: 2025/02/05 18:29:19 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//return a character in a string
char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			needle;

	i = 0;
	needle = (char) c;
	while (str[i] != '\0')
	{
		if (str[i] == needle)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == needle)
		return ((char *) &str[i]);
	return (NULL);
}
//duplicate a string
char	*ft_strdup(const char *src)
{
	int		org_size;
	char	*dup;
	size_t	i;

	org_size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (org_size + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

size_t	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
//locate a substring in a larger string up to len characters
char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	string_len;
	size_t	i;

	if (!string)
		return (NULL);
	string_len = ft_strlen(string);
	if (start >= string_len)
		return (ft_strdup(""));
	if (len > string_len - start)
		len = string_len - start;
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = string[start + i];
		i++;
	}
	return (sub_str);
}
//concatenate 2 strings
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	i = 0;
	j = 0;
	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	return (new);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}
