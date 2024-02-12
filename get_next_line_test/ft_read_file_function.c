# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
#include "get_next_line.h"

char	*ft_free(char *buffer, char *buf)
{
	char	*temp;

	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

char	*read_file(int fd, char *res)
{
	char	*buffer;
	int		byte_read;

	if (!res)
		res = calloc(1, 1);
	buffer = calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[byte_read] = 0;
		res = ft_free(res, buffer);
		// if (ft_strchr(buffer, '\n'))
		// 	break ;
	}
	free(buffer);
	return (res);
}

int	main()
{
	char *filename = "text1.txt";
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}

	char *result = read_file(fd, NULL);
	if (result == NULL)
	{
		printf("Error reading file\n");
		close(fd);
		return 1;
	}

	printf("File contents:\n%s\n", result);

	free(result);
	close(fd);

	return 0;
}
