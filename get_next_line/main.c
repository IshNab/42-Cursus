#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		count;
	
	count = 1;
	fd = open("text1.txt", O_RDONLY);
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
	// free(line);
	printf("BUFFER_SIZE = %d\n", BUFFER_SIZE);
	while(1)
	{
		line = get_next_line(fd);
		printf("line#%d --- %s", count++, line);
		if(line == NULL)
		{
			free(line);
			break;
		}
		free(line);
		line = NULL;
	}
	printf("\n");
	close(fd);
	return(0);
}
