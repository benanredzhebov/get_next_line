/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:44:43 by beredzhe          #+#    #+#             */
/*   Updated: 2023/12/18 13:49:22 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_bonus.h"

// int main(void)
// {
// 	int	fd = open("test.txt", O_RDONLY);
// 	int	fd1 = open("text1.txt", O_RDONLY);


// 	char *line;
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);

// 	printf("\n\n");

// 	while ((line = get_next_line(fd1)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd1);
// 	return 0;
// }

// int	main(void)
// {
// 	int		fd_1;
// 	int		fd_2;
// 	int		fd_3;
// 	int		i;
// 	char	*line;

// 	i = 1;
// 	fd_1 = open("test.txt", O_RDONLY);
// 	fd_2 = open("text1.txt", O_RDONLY);
// 	fd_3 = open("text2.txt", O_RDONLY);
	
// 	line = get_next_line(fd_1);
// 	printf("%s", line);

// 	line = get_next_line(fd_2);
// 	printf("%s", line);

// 	line = get_next_line(fd_3);
// 	printf("%s", line);
// }

int	main(void)
{
	int		fd_1;
	int		i;
	char	*line[4096];

	i = 1;
	fd_1 = open("test.txt", O_RDONLY);
	while (1)
	{
		line[fd_1] = get_next_line(fd_1);
		printf("Line %d for fd %d: %s\n", i, fd_1, line[fd_1]);
		if (!line[fd_1])
			return (0);
		free(line[fd_1]);
		i++;
	}
}
