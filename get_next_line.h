/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbraga-s <mbraga-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:31:41 by mbraga-s          #+#    #+#             */
/*   Updated: 2022/12/26 19:31:41 by mbraga-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GETNEXTLINE_H
# define GETNEXTLINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	*get_next_line (int fd);

int		phrase_len(char *str, int i);

#endif