/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:34:40 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/08 13:39:54 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int n = 0;
	int w = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	if (argv[1][0] >= '!' && argv[1][0] <= '~')
	{
		w++;
		n++;
	}
	while (argv[1][n] != '\0')
	{
		if (argv[1][n] == ' ' || argv[1][n] == '\t')
			n++;
		else if ((argv[1][n] >= '!' && argv[1][n] <= '~') && (argv[1][n-1] == ' ' || argv[1][n-1] == '\t'))
		{
			w++;
			n++;
		}
		else
		{
			n++;
		}
	}
	printf("%d", w);
}
