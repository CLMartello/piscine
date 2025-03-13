/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:43:35 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/10 20:12:40 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	size;
	int	*array;

	n = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (-1);
	while (n < size)
	{
		array[n] = min;
		min++;
		n++;
	}
	*range = array;
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	int i = 0;
	int *range;
	ft__ultimate_range(&range, 1, 5);
	while (i < 4)
	{
		printf("%d ", range[i]);
		i++;
	}
}*/
