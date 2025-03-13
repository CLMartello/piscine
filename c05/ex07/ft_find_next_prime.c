/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:36:42 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/04 20:35:49 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	while (n < nb)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		nb = ft_find_next_prime(nb + 1);
		return (nb);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	int x = ft_find_next_prime(atoi(argv[1]));
	printf("%d", x);
	return (0);
}*/
