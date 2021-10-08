/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:19:45 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/08 16:55:17 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// #include "../get_next_line.h"
#include "../get_next_line_bonus.h"

char	*g_file_name1 = "./input1";
char	*g_file_name2 = "./input2";
FILE	*g_fp1;
FILE	*g_fp2;

char	*get_next_line(int fd);

int	main(void)
{
	char	*linha1;
	char	*linha2;
	int		i;

	i = 0;
	g_fp1 = fopen(g_file_name1, "r");
	g_fp2 = fopen(g_file_name2, "r");
	linha1 = get_next_line(g_fp1->_fileno);
	linha2 = get_next_line(g_fp2->_fileno);
	while (linha1 != NULL && linha2 != NULL && i < 100)
	{
		printf("Line1 - %i >>> %s", i++, linha1);
		free(linha1);
		printf("Line2 - %i >>> %s", i++, linha1);
		free(linha2);
		linha1 = get_next_line(g_fp1->_fileno);
		linha2 = get_next_line(g_fp2->_fileno);
	}
	fclose(g_fp1);
	fclose(g_fp2);
	return (0);
}
// gcc -g get_next_line_utils.c get_next_line.c main.c -D BUFFER_SIZE=42
