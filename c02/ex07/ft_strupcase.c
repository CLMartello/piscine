/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:53:00 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/26 18:15:22 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char x[] = "t";
	printf("%s\n", x);
	ft_strupcase(x);
	printf("%s", x);
	return(0);
}*/
