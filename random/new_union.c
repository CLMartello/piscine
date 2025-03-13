/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_union.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:37:46 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/12 21:47:50 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int r = 0;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		j = 0;
		r = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{
				r++;
			}
			j++;
		}
		j = i -1;
		while (j >= 0)
		{
			if (argv[1][i] == argv[1][j])
			{
				r++;
			}
			j--;
		}
		if (r == 0)
		{
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
