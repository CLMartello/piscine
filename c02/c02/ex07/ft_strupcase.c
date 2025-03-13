/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:21:43 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 17:02:21 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
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
	ft_strupcase(x);
	printf("%s", x);
	return(0);
}*/
