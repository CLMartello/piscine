/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:36:21 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/04 20:22:02 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	fibo;

	fibo = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		fibo = 0;
	if (index == 1 || index == 2)
		fibo = 1;
	if (index > 2)
		fibo += ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibo);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	int x = ft_fibonacci(atoi(argv[1]));
	printf("%d", x);
}*/
