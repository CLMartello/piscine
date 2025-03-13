/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:21:35 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/09 17:23:35 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_calc_size(int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 9)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char 	*ft_itoa(int n)
{
	char	*res;
	int	i;
	int	size;
	int	lim;

	size = (ft_calc_size(n));
	if (n == -2147483648)
	{
		res = (char *) malloc(12 * sizeof(char));
		if (!res)
			return (0);
		res = "-2147483648\0";
		printf("%s\n", res);
		return (res);
	}
	res = (char *) malloc(size * sizeof(char) + 1);
	if (!res)
		return (0);
	lim = -1;
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
		lim = 0;
	}
	i = size -1;
	while (i > lim)
	{
		res[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	res[size] = '\0';
	printf("%s\n", res);
	return (res);
}

#include <stdlib.h>

int	main(void)
{
//	ft_itoa(123);
//	ft_itoa(450088);
	ft_itoa(-823);
//	ft_itoa(0);
//	ft_itoa(-2147483648);
//	ft_itoa(2147483647);
}
