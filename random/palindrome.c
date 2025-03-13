/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:26:43 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/09 17:57:31 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	palindrome(char *str)
{
	int	i;
	int	j;
	
	i = 0;
	j = (ft_strlen(str) -1);
	while (i < j)
	{
		if (str[i] == str[j])
		{
			i++;
			j--;
		}
		else
		{
			write(1, "\n", 1);
			return ;
		}
	}
	ft_putstr(str);
	write(1, "\n", 1);
}

int	main(void)
{
	palindrome("abbannabba");
	return (0);
}
