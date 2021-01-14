/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clim <clim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:56:19 by clim              #+#    #+#             */
/*   Updated: 2021/01/14 12:31:31 by clim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int				get_next_line(int fd, char **line);

int 			main()
{
	int			fd;
	int			i;
	char 		**line;

	fd = open("/Users/clim/42seoul/get_next_line/test.txt", O_RDONLY, S_IRUSR);
	
	get_next_line(fd, line);
	printf("%s\n", *line);
	get_next_line(fd,line);
	printf("%s\n", *line);
	get_next_line(fd,line);
	printf("%s\n", *line);
	get_next_line(fd,line);
	printf("%s\n", *line);
	get_next_line(fd,line);
	printf("%s\n", *line);
}
