/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:41:09 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/10 20:08:43 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;

	n = 0;
	if (min >= max)
		return (array = NULL);
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (0);
	while (min < max)
	{
		array[n] = min;
		n++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int i = 0;
	int *array = ft_range(0, 10);
	while (i < 10)
	{
		printf("%d ", array[i]);
		i++;
	}
}*/
