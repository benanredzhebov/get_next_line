/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:44:43 by beredzhe          #+#    #+#             */
/*   Updated: 2023/12/15 19:02:42 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
	int	fd = open("test.txt", O_RDONLY);
	int	fd1 = open("text1.txt", O_RDONLY);


	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);

	printf("\n\n");

	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	printf("\n");

	close(fd1);
	return 0;
}


// int	main()
// {
// 	int	fd;

// 	fd = open("test.txt", O_RDONLY);
// 	printf("%s\n", get_next_line(fd));
// 	close(fd);
// 	printf("%d\n", fd);
// 	printf("%s\n", get_next_line(fd));
// }

// int	main()
// {
// 	int		fd;
// 	char	*line;
// 	int		lines;

// 	lines = 1;
// 	fd = open("test.txt", O_RDONLY);

// 	while ((line = get_next_line(fd)))
// 		printf("%d->%s\n", lines++, line);
// }

// int	main()
// {
// 	int		fd;
// 	char	buf[256];
// 	int		chars_read;

// 	fd = open("test.txt", O_RDONLY);
// 	while ((chars_read = read(fd, buf, 5)))
// 	{
// 		buf[chars_read] = '\0';
// 		printf("buf-> %s\n", buf);
// 	}
// 	return 0;
// }