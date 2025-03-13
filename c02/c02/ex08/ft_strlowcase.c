/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:22:43 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 17:03:39 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char x[] = "TT55da";
	printf("%s\n", x);
	ft_strlowcase(x);
	printf("%s", x);
	return(0);
}*/
