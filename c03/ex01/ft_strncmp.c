/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:11:57 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:27:59 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && c < n)
	{
		if ((s1[c] > s2[c]) || (s1[c] < s2[c]))
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		return (0);
	}
	int n = atoi(argv[3]);
	int x = ft_strncmp(argv[1], argv[2], n);
	printf("%d\n", x);
	int y = strncmp(argv[1], argv[2], n);
	printf("%d\n", y);
}*/