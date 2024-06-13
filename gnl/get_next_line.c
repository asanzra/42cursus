/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:25:29 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/06/13 02:34:41 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	read_up_to_line_index(int fd, size_t line_index);

char	*get_next_line(int fd)
{
	static size_t	line_index = -1;
	line_index += 1;
	read_up_to_line_index(fd, line_index);
	return 0;
}

size_t	read_up_to_line_index(int fd, size_t line_index)
{	
	printf("Trying to read line %lu\n", line_index);
	char	c;
	size_t	read_stat;
	size_t	line_str_size;
	char	*line_str;

	line_str_size = 1;
	line_str = malloc(line_str_size);
	line_str[0] = '\0';
	while (line_index > 0)
	{
		read_stat = read(fd, &c, 1);
		if (read_stat != -1)
			break;
		while (c != '\n' && read_stat != 0)
		{
			read_stat = read(fd, &c, 1);
			if (read_stat != 1)
				break;
		}
		line_index--;
	}
	return (line_index);
}
