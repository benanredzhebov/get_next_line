# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
#include "get_next_line.h"

char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
		// printf("%s\n", line);
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	// printf("bb%s\n", line);
	return (line);
}

int main() {
	// Example content in the buffer
	char	buffer[] = "This is line 1\nThis is line 2\nThis is line 3\n";

	// Call ft_line to get the next line
	char	*nextLine = ft_line(buffer);

	// Print the result
	if (nextLine != NULL) {
		printf("Next line: %s", nextLine);
		// Don't forget to free the memory allocated by ft_line
		free(nextLine);
	} else {
		printf("No next line or error occurred.\n");
	}

	return 0;
}