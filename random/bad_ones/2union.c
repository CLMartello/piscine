/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2union.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:37:46 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/08 14:14:54 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i+j] = s2[j];
		j++;
	}
	s1[i+j] = '\0';
	return (s1);
}

int	main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int rep = 0;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_strcat(argv[1], argv[2]);
	while (argv[1][i])
	{
		j = i + 1;
		while (argv[1][j])
		{
			if (argv[1][i] == argv[1][j])
			{
				rep++;
			}
			j++;
		}
		if (rep == 0)
		{
			write(1, &argv[1][i], 1);
		}
		i++;
		rep = 0;
	}
	i = 0;
/*	while (argv[1][i])
	{
		if (argv[1][i] != 1)
			write(1, &argv[1][i], 1);
		i++;
	}*/
	write(1, "\n", 1);
	return (0);
}
