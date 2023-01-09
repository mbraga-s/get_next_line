/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:29:41 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/12/26 19:29:41 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//verificar se é preciso salvaguardar o valor de fd (ser positivo ou maior que 2 por exemplo)

char	*get_next_line(int fd)
{
	size_t			BUFFER_SIZE;
	static size_t	i;
	size_t			j;
	char			*buffer;
	char			*line;

	//i = 0;
	j = 0;
	//BUFFER_SIZE = 42;
	//Cria um buffer e lê um x número de bytes para dentro deste
	buffer = malloc(BUFFER_SIZE + 1);
	buffer[BUFFER_SIZE] = '\0';
	if (!buffer)
		return (NULL);
	read(fd, buffer, BUFFER_SIZE);
	//Percorre o buffer até acabar ou encontrar \n
	//De seguida copia para outra zona alocada, liberta o buffer e retorna a nova zona
	i = phrase_len(buffer, i);
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	while ((j < i) && buffer[j])
	{
		line[j] = buffer[j];
		j++;
	}
	free(buffer);
	line[j] = '\0';
	return (line);
}
