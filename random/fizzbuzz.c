/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:10:36 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/22 19:42:39 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*fizzbuzz(int n)
{
	char *fizz = "Fizz";
	char *buzz = "Buzz";
	
	if (n % 3 == 0 && n % 5 == 0)
	{
		ft_putstr(fizz);
		ft_putstr(buzz);
	}
	else if (n % 3 == 0)
		ft_putstr(fizz);
	else if (n % 5 == 0)
		ft_putstr(buzz);
	else
	{
		if (n > 9)
		{
			ft_putchar(n / 10 + '0');
			ft_putchar(n % 10 + '0');
		}
		else
			ft_putchar(n % 10 + '0');
	}
	return ("ok");
}

#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	fizzbuzz(atoi(argv[1]));
	return (0);
}
