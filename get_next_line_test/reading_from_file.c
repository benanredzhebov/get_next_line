/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_from_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:55:17 by beredzhe          #+#    #+#             */
/*   Updated: 2023/12/15 11:28:02 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// /*Read from a file by 3 characters each time*/
// int	bytes_read;

// bytes_read = read(fd, cup_buffer, 3);

// /*What is the size of the buffer. It has to be 3 + 1 for the empty string to terminate. So, allocate memmory accordingly*/

// #include <unistd.h>

// int	bytes_read;
// char	*cup_buffer;

// cup_buffer = malloc(3 + 1 * sizeof(char));
// bytes_read = read(fd, cup_buffer, 3);

// /*If we are passing the buffer to other String manipulation functions of libft,
// remember the low-level functions like strlen, strdup will want us, the developers to null-terminate the string properly.
// So, better use calloc, instead of malloc. But remember, the subject doesn’t allow to use standard calloc, neither libft.
// So let’s smartly copy our ft_calloc into the get_next_line_utils.c function.
// Also, follow the best practice of returning NULL if ft_calloc allocation failed.*/

// #include <unistd.h>
// #include "get_next_line.h"

// char	*get_next_line(int fd)
// {
// 	int	bytes_read;
// 	char	*cup_buffer;

// 	cup_buffer = ft_calloc(3 + 1 * sizeof(char))
// 	if (buffer == NULL)
// 		return (NULL);
// 	bytes_read = read(fd, cup_buffer, 3);
// 	return (cup_buffer);
// }

/*Don’t forget to tell the code, when to stop. When should it stop? Yes, when it reads 0 or less bytes, it should stop there.*/

#include <unistd.h>
#include "get_next_line.h"

char *get_next_line (int fd)
{
	int	bytes_read;
	char	*cup_buffer;

	cup_buffer = ft_calloc(3 + 1 * sizeof(char));
	if (cup_buffer == NULL)
		return (NULL);
	bytes_read = read(fd, cup_buffer, 3);
	if (bytes_read <= 0)
		return (NULL);
	return (cup_buffer);
}

/*Let’s write our own main function just to invoke and test this function*/

// #include <stdio.h>
// #include <fcntl.h>

int	main(void)
{
	int	fd;
	char	*next_line;
	int	count;

	count = 0;
	fd = open("example.txt", O_RDONLY);
	next_line = get_next_line(fd);
	count++;
	printf("[%d]:%s\n", count, next_line);
	next_line = NULL;

	close(fd);
	return (0);
}