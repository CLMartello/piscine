/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:27:39 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:47:10 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if ((*str < 48) || (*str > 57))
			{
				return (0);
			}
			str++;
		}
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int x = ft_str_is_numeric("\0");
	int y = ft_str_is_numeric("4546545455555555d555578641");
	printf("%d, %d", x, y);
}*/
