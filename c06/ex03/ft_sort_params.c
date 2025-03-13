/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:52:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/06 21:30:49 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] > s2[n])
			return (1);
		if (s1[n] < s2[n])
			return (-1);
		n++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	if (argc < 2)
		return (0);
	while (a < argc)
	{
		b = a + 1;
		while (b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				temp = argv[a];
				argv[a] = argv[b];
				argv[b] = temp;
			}
			b++;
		}
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a++;
	}
}
