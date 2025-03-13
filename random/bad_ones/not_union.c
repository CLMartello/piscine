/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:16:33 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/08 11:37:30 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i+j] = s2[j];
		j++;
	}
	s1[i+j] = '\0';
	return (s1);
}

void	charcmp(char *s1, char *new)
{
	char c;
	int i;
	int j;
	
	i = 0;
	j = 0;
//	c = s1[j];
//	new[0] = s1[0];
	new[0] = '\0';
	while (s1[j] != '\0')
	{
		c = s1[j];
		while (new[i] != c)
		{
			if (new[i] == '\0')
			{
				new[i] = c;
				new[i+1] = '\0';
			}
			i++;
		}
		i = 0;
		j++;
	}
}

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		write(1, "\n", 1);
	ft_strcat(argv[1], argv[2]);
	printf("%s", argv[1]);
	charcmp(argv[1], argv[2]);
	printf("%s", argv[2]);
}
