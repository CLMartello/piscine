/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:07:12 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/27 11:40:59 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	holder;

	counter = 0;
	size--;
	while (counter < size)
	{
		holder = tab[counter];
		tab[counter] = tab[size];
		tab[size] = holder;
		counter++;
		size--;
	}
/*	int n = 0;
        while (n < 5)
        {
                printf("%d\n", tab[n]);
                n++;
        }*/
	
}

#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	int n = 0;
	while (n < 5)
	{
		printf("%d\n", tab[n]);
		n++;
	}
}
