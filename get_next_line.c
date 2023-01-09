/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:29:41 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/01/09 16:47:29 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*temp;
	ssize_t		i;
	int			flag;

	flag = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	buffer[BUFFER_SIZE] = '\0';
	if (!buffer)
		return (0);
	while (flag)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
			return (0);
		else if (i == 0)
			break ;
		temp = ft_strjoin(temp, buffer);
		flag = ft_newline(temp);
	}
	free (buffer);
	line = ft_line(temp, i);
	return (line);
}
