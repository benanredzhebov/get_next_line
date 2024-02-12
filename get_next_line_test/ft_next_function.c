# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
#include "get_next_line.h"

char	*ft_next(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	// find len of first line
	while (buffer[i] && buffer[i] != '\n')
		i++;
	// if eol == \0 return NULL
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	// len of file - len of firstline + 1
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	// line == buffer
	while (buffer[i])
		line[j++] = buffer[i++];
	//free(buffer);
	return (line);
}

char *ft_next(char *buffer);

int	main() {
// Example content in the buffer
char	buffer[] = "This is line 1\nThis is line 2\nThis is line 3\nThis is line 4\n";
// Call ft_next to get the next line
char	*nextLine = ft_next(buffer);
// Print the result
if (nextLine != NULL) {
	printf("Next line: \n%s\n", nextLine);
	// Don't forget to free the memory allocated by ft_next
	free(nextLine);
} else {
	printf("No next line or error occurred.\n");
}
return 0;
}
