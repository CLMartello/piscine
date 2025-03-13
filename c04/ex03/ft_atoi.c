/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:31:37 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/03 21:51:07 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	n;
	int	val;
	int	signal;

	n = 0;
	val = 0;
	signal = 1;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
		{
			signal *= -1;
		}
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		val = val * 10 + (str[n] - '0');
		n++;
	}
	return (val * signal);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	int n = ft_atoi(argv[1]);
	printf("meu resultado: %d\n", n);
//	printf("atoi resultado: %d\n", atoi(argv[1]));
}*/
