/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:22:59 by mbraga-s          #+#    #+#             */
/*   Updated: 2023/02/13 17:09:29 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] != '\n')
		i++;
	return (i);
}

/* char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (0);
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	free (s1);
	while ((i + j) < (ft_strlen(s1) + ft_strlen(s2)))
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
 */

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*l_saved;

	i = 0;
	j = 0;
	l_saved = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!l_saved)
		return (NULL);
	while (str1 && str1[i])
	{
		l_saved[i] = str1[i];
		i++;
	}
	free(str1);
	while (str2[j])
	{
		l_saved[i++] = str2[j];
		if (str2[j++] == '\n')
			break ;
	}
	l_saved[i] = '\0';
	return (l_saved);
}

int	ft_clean(char *ptr)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	while (ptr[i])
	{
		if (flag == 1)
		{
			ptr[j] = ptr[i];
			j++;
		}
		if (ptr[i] == '\n')
			flag = 1;
		ptr[i] = '\0';
		i++;
	}
	return (flag);
}
