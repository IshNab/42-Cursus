#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;

	fd1 = open("text1.txt", O_RDONLY);
	fd2 = open("text2.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1)
	{
		printf("Error opening one or both files, try again.\n");
		return (1);
	}
	printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
	while(1)
	{
		line1 = get_next_line_bonus(fd1);
		line2 = get_next_line_bonus(fd2);
		printf("text1: %s\n", line1);
		printf("text2: %s\n", line2);
		if(line1 == NULL || line2 == NULL)
		{
			free(line1);
			free(line2);
			break;
		}
		free(line1);
		free(line2);
		line1 = NULL;
		line2 = NULL;
	}
	while(1)
	{
		line1 = get_next_line_bonus(fd1);
		if(line1 == NULL )
		{
			free(line1);
			break;
		}
		free(line1);
		line1 = NULL;
	}
	printf("\n");
	close(fd1);
	close(fd2);
	return(0);
}
