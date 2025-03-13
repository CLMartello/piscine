/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:46:09 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/11 20:10:05 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = ABS(53);
	printf("mine ABS: %d\n", x);
	y = abs(53);
	printf("real abs: %d\n", y);
}
