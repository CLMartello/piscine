/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:42:32 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/23 12:09:09 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


#include <stdio.h>

int	main(void)
{
	int a, b, *c, *d;

	a = 10;
	b = 5;
	c = &a;
	d = &b;
	ft_div_mod(a, b, c, d);
	printf("%d, %d", *c, *d);
}

