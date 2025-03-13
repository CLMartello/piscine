/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 15:48:28 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/06 21:30:36 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	while (argc > 1)
	{
		argc--;
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
	}
}
