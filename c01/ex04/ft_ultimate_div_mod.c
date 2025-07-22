/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:40:04 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:19:21 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	pa;
	int	pb;

	pa = *a / *b;
	pb = *a % *b;
	*a = pa;
	*b = pb;
}

/*
#include <stdio.h>

int	main(void)
{
	int x, y;

	x = 10;
	y = 5;
	printf("%d, %d", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("%d, %d", x, y);
}*/