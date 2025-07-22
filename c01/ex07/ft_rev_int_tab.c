/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:07:12 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:25:08 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

/*
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
}*/