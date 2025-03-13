/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:57:08 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/01 11:07:05 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	dif;
	int	n;

	n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if ((s1[n] > s2[n]) || (s1[n] < s2[n]))
		{
			dif = s1[n] - s2[n];
			return (dif);
		}
		n++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (0);
	}
	int x = ft_strcmp(argv[1], argv[2]);
	printf("%d\n", x);
	int y = strcmp(argv[1], argv[2]);
	printf("%d\n", y);
}
*/
