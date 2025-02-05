/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:38:21 by inabakka          #+#    #+#             */
/*   Updated: 2025/02/05 15:48:44 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*read_from_file(char *basin_buffer, int fd)
{
	int		bytes_read;
	char	*temp_buffer;
	char	*new_basin_buffer;

	temp_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!temp_buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			return (free(temp_buffer), NULL);
		temp_buffer[bytes_read] = '\0';
		new_basin_buffer = ft_strjoin(basin_buffer, temp_buffer);
		if (!new_basin_buffer)
			return (free(temp_buffer), NULL);
		free(basin_buffer);
		basin_buffer = new_basin_buffer;
		if (ft_strchr(new_basin_buffer, '\n'))
			break ;
	}
	free(temp_buffer);
	return (basin_buffer);
}

char	*get_next_line_bonus(int fd)
{
	static char	*basin_buffer[1000];
	char		*line;
	char		*newline_pos;
	char		*remaining_content;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
		return (NULL);
	if (!basin_buffer[fd])
		basin_buffer[fd] = ft_calloc(BUFFER_SIZE, sizeof(char));
	if (!ft_strchr(basin_buffer[fd], '\n'))
		basin_buffer[fd] = read_from_file(basin_buffer[fd], fd);
	if (!basin_buffer[fd])
		return (NULL);
	newline_pos = ft_strchr(basin_buffer[fd], '\n');
	line = ft_substr(basin_buffer[fd], 0, newline_pos - basin_buffer[fd] + 1);
	remaining_content = ft_strdup(newline_pos + 1);
	free(basin_buffer[fd]);
	basin_buffer[fd] = remaining_content;
	if (ft_strlen(remaining_content) <= 0)
	{
		free(basin_buffer[fd]);
		return (line);
	}
	return (line);
}
