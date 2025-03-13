/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:29:39 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:43:54 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if ((*str < 65) || (*str > 90 && *str < 97) || (*str > 122))
			{
				return (0);
			}
			str++;
		}
	}
	return (1);
}

/*

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int x = ft_str_is_alpha("\0");
	printf("%d\n", x);
	int y = ft_str_is_alpha("banaa");
	printf("%d\n", y);
	return(0);
}*/
