/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphofuya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:34:40 by bphofuya          #+#    #+#             */
/*   Updated: 2019/07/04 16:47:09 by bphofuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;
	int sd;
	char *line;
	(void)argc;

	fd = open(argv[1], O_RDONLY);
	sd = open(argv[2], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	while (get_next_line(sd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	close(fd);
//	close(sd);
	return (0);
}
