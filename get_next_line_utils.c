/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:22:59 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/01/09 16:51:29 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*ptr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	ptr = (char *)malloc(len1 + len2 + 1);
	if (!ptr)
		return (0);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while ((i + j) < (len1 + len2))
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

int	ft_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_line(char *temp, int i)
{
	char	*line;
	int		j;

	j = 0;
	while (temp[j] != '\n' && temp[j])
		j++;
	if (i == 0)
		line = malloc(j + 1);
	else
		line = malloc(j + 2);
	if (!line)
		return (0);
	
}
