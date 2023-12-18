/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:44:43 by beredzhe          #+#    #+#             */
/*   Updated: 2023/12/17 17:41:20 by beredzhe         ###   ########.fr       */
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
// 	char	*line;
// 	int		fd1;
// 	int		fd2;
// 	int		couner;

// 	fd1 = open("text1.txt", O_RDONLY);
// 	fd2 = open("test.txt", O_RDONLY);

// 	couner = 0;
// 	while ((line = get_next_line(fd1)) && couner < 1)
// 	{
// 		printf("\n%s\n", line);
// 		couner++;
// 	}
// 	printf("NEXT1\n");
// 	while ((line = get_next_line(fd2)) && couner < 2)
// 	{
// 		printf("\n%s\n", line);
// 		couner++;
// 	}
// 	printf("NEXT2\n");
// 	while ((line = get_next_line(fd1)) && couner < 3)
// 	{
// 		printf("%s\n", line);
// 		couner++;
// 	}
// 	printf("NEXT3\n");
// 	while ((line = get_next_line(fd2)) && couner < 4)
// 	{
// 		printf("%s\n", line);
// 		couner++;
// 	}
// }

int	main(void)
{
	int		fd_1;
	int		fd_2;
	int		fd_3;
	int		i;
	char	*line;

	i = 1;
	fd_1 = open("test.txt", O_RDONLY);
	fd_2 = open("text1.txt", O_RDONLY);
	fd_3 = open("text2.txt", O_RDONLY);
	
	line = get_next_line(fd_1);
	printf("%s", line);

	line = get_next_line(fd_2);
	printf("%s", line);

	line = get_next_line(fd_3);
	printf("%s", line);
}
