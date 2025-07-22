/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:37:03 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:25:32 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int temp;
	
	a = 0;
	b = a + 1;
	while (a < size)
	{
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {6, 9, 4, 0, 2, -5, -10};
	int size = 7;
	int n = 0;

	ft_sort_int_tab(tab, size);
	while (n < size)
	{
		printf("%d\n", tab[n]);
		n++;
	}
}*/