/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:38:21 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/29 17:33:35 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
function: return a line from a file descriptor
return 1 --> line was read
return 0 --> finished reading file
return -1 --> error
*/

//read data from file and append to partial content
static char	*read_from_file(char *basin_buffer, int fd)
{
	int		bytes_read;
	//the temp buffer is the cup we are using to scoop from the main basin_buffer
	char	*temp_buffer;
	char	*new_basin_buffer;
	static int	counter = 1;

	printf("ft_calloc#%d ", counter++);
	//allocate memory for a temporary buffer
	temp_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!temp_buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		//reads up to len bytes of BUFFER_SIZE from the file descriptor and store in temp_buffer
		//buffer is an array where you can stock the read chars from the file descriptor
		//read function can recall the last position in the file
		bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
		//return -1 indicates an error, return 0 means nothing was read
		//if we read 0 or less bytes, then the code stops
		if (bytes_read <= 0)
			return (free(temp_buffer), NULL);
		temp_buffer[bytes_read] = '\0';	//null terminate the buffer (why?)
		//append content of temp_buffer to basin_buffer
		new_basin_buffer = ft_strjoin(basin_buffer, temp_buffer);
		if (!new_basin_buffer)
		{
			free (temp_buffer);
			return (NULL);
		}
		free(basin_buffer);
		basin_buffer = new_basin_buffer;
		if (ft_strchr(new_basin_buffer, '\n'))
			break ;
	}
	//already transfered data from temp_buffer to new_basin_buffer so no need to keep temp_buffer
	//need to free temp_buffer to avoid memory leaks
	free(temp_buffer);
	return (basin_buffer);
}

//main function to fish the next line out of the file descriptor
char	*get_next_line(int fd)
{
	/*static char basin_buffer (single char variable) only stores one byte of data
	as a pointer, can hold larger amount of data, can manage dynamic memory
	static basin_buffer holds partially read content from file descriptor, remembers its value*/
	static char	*basin_buffer;
	char		*line;
	char		*newline_pos;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);	
	// if the basin_buffer is empty, make space for it
	if (!basin_buffer)
		basin_buffer = ft_calloc(BUFFER_SIZE, sizeof(char));
	//read from file if cannot find newline character in basin_buffer
	if (!ft_strchr(basin_buffer, '\n'))
		basin_buffer = read_from_file(basin_buffer, fd);
	//if no data could be read
	if (!basin_buffer)
		return (NULL);
	//find position of newline character in the basin_buffer using ft_strchr
	newline_pos = ft_strchr(basin_buffer, '\n');
	//if there is no newline character, return the whole buffer as a line
	if (!newline_pos)
	{
		//don't fully understand this
		line = ft_strdup(basin_buffer);
		free(basin_buffer);
		basin_buffer = NULL;
		return(line);
	}
	//if find a new line, extract it
	//allocate space for the next line
	line = ft_substr(basin_buffer, 0, newline_pos - basin_buffer + 1);
	//update the basin buffer to hold the rest of the content
	//that comes after the returned line
	char	*remaining_content;
	remaining_content = ft_strdup(newline_pos + 1);
	free(basin_buffer);
	basin_buffer = remaining_content;
	return(line);
}
