/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:41:21 by inabakka          #+#    #+#             */
/*   Updated: 2024/11/25 19:55:44 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		org_size;
	char	*dup;

	org_size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (org_size + 1));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

/*
int main(void)
{
    char    src[30] = "Taste by Rhye is a good song";
    char    *duplicate;
    int     src_len;
    int     duplicate_len;

    duplicate = ft_strdup(src);
    src_len = ft_strlen(src);
    duplicate_len = ft_strlen(duplicate);

    printf("original string: %s and it's length: %d\n", src, src_len);
    printf("duplicate string: %s and 
		it's length: %d\n", duplicate, duplicate_len);

    //free the allocated memory
    free(duplicate);

    return(0);
}
*/
