/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:57:58 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/26 18:35:25 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 65 && str[n] <= 90)
		{
			str[n] += 32;
		}
		n++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char x[] = "qwertyuiopABCDEFGHIJKLaaaMNOPQRSTUVXZWY123456789bb";
//	char *x = "TT58";
	printf("%s\n", x);
	ft_strlowcase(x);
//	printf("%s", x);
	int n = 0;
	while (x[n] != '\0')
	{
		write(1, &x[n], 1);
		n++;
	}
	return(0);
}*/
