/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:46:47 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:20:06 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("banana"));
        printf("%d\n", ft_strlen("b"));
        printf("%d\n", ft_strlen("testando com espaco"));
        printf("%d\n", ft_strlen("shdsu34834hn333"));
	return (0);
}*/