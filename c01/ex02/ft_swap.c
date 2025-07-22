/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:55:53 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:18:49 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x, y;
	
	x = 1;
	y = 2;
	printf("%d, %d", x, y);
	ft_swap(&x, &y);
	printf("%d, %d", x, y);
}*/