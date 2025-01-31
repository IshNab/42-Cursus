#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		count;
	
	count = 1;
	fd = open("text.txt", O_RDONLY);
	//if file not found, negative integer represents an error
	if (fd == -1)
	{
		printf("Error opening the file, try again.\n");
		return (1);
	}
	// line = get_next_line(fd);
	// printf("line#%d --- %s",count++, line);
	// line = get_next_line(fd);
	// printf("line#%d --- %s",count++, line);
	// line = get_next_line(fd);
	// printf("line#%d --- %s",count++, line);
	// line = get_next_line(fd);
	// free(line);
	// while 1 is a forever loop, goes until it hits a break
	// read from the file endlessly
	while(1)
	{
		line = get_next_line(fd);
		//increment count everytime we get a new line
		printf("line#%d --- %s", count++, line);
		//allow us to break out of the loop
		if(line == NULL)
			break;
		free(line);
		line = NULL;
	}
	close(fd);
	return(0);
}
