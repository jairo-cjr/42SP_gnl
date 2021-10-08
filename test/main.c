/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:19:45 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/08 13:44:01 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../get_next_line.h"

char	*g_file_name = "./input";
FILE	*g_fp;

char	*get_next_line(int fd);

int	main(void)
{
	char	*linha;
	int		i;

	i = 0;
	g_fp = fopen(g_file_name, "r");
	linha = get_next_line(g_fp->_fileno);
	while (linha != NULL && i < 100)
	{
		printf("Line %i >>> %s", i++, linha);
		free(linha);
		linha = get_next_line(g_fp->_fileno);
	}
	fclose(g_fp);
	return (0);
}
// gcc -g get_next_line_utils.c get_next_line.c main.c -D BUFFER_SIZE=42
