/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:38:50 by inabakka          #+#    #+#             */
/*   Updated: 2025/02/05 15:23:49 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line_bonus(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *string, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *str, int c);
void	*ft_calloc(size_t count, size_t size);
char	*read_from_file(char *basin_buffer, int fd);

#endif
