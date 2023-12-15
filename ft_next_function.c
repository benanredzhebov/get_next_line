#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = calloc((strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return (line);
}

int	main() {
	// Example content in the buffer
	char buffer[] = "This is line 1\nThis is line 2\nThis is line 3\n";

	// Call ft_next to get the next line
	char *nextLine = ft_next(buffer);

	// Print the result
	if (nextLine != NULL) {
		printf("Next line: %s\n", nextLine);
		// Don't forget to free the memory allocated by ft_next
		free(nextLine);
	} else {
		printf("No next line or error occurred.\n");
	}

	return 0;
}
