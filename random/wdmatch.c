/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:01:13 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/09 18:42:46 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	*wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			if (s1[i] == '\0')
			{
				ft_putstr(s1);
				write(1, "\n", 1);
				return (0);
			}
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(void)
{
	wdmatch("vrv", "fagvvfdxcacpolhyghbred");
	return (0);
}
