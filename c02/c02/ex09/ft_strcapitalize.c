/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:42:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:18:09 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
//	int n;

//	n = 0;
	while (*str != '\0')
	{

		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
		while (*str != 32)
		{
			if (*str >= 65 && *str <= 90)
			{
				*str += 32;
			}
//			printf("%c", *str);
			str++;
		}
		str++;		
	}
	return (str);
}

int	main(void)
{
	char x[] = "nHASU SAH UA44SHAS";
	printf("%s\n", x);
	ft_strcapitalize(x);
	printf("%s", x);
	return (0);
}
