/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 09:26:44 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/06 18:58:28 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	size;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	size = nb;
	while (size > 1)
	{
		nb *= size - 1;
		size--;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	int x = ft_iterative_factorial(atoi(argv[1]));
	printf("%d", x);
	return (0);
}*/
