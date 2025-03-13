/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:22:14 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:37:10 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char x[100];
	char *y = "555";

//	char *x;
//	x = (char*)malloc(sizeof(y));

	ft_strcpy(x, y);
	printf("%s", x);
	return(0);
}*/
