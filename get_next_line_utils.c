/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:22:59 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/12/27 09:22:59 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	phrase_len(char *str, int i)
{
	while (str[i])
	{
		if (str[i] == '\n')
		{
			i++;
			break ;
			//como i é tanto contador como indicador de posição pode dar asneira ao incrementar para contar com o \n
			//ter atenção ao comportamento de i quando a função é chamada novamente, depois de ter encontrado \n
		}
		i++;
	}
	return (i);
}

/* int	main(void)
{
	char *ptr;

	ptr = "123456\n789";
	printf("%d", phrase_len(ptr));
	return (0);
}
*/