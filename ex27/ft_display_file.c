/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:12:30 by pyarova           #+#    #+#             */
/*   Updated: 2024/10/08 11:53:23 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buff[4096];

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	ret = read(fd, buff, 4096);
	while (ret > 0)
	{
		write(1, buff, ret);
		ret = read(fd, buff, 4096);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
