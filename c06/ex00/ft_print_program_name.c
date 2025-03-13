/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:51:40 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/06 21:30:12 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	if (argc != 1)
		return (0);
	while (argv[0][n] != '\0')
	{
		write(1, &argv[0][n], 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}
