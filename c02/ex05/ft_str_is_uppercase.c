/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:21:19 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:52:07 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if (*str < 65 || *str > 90)
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

int     main(void)
{
        int x = ft_str_is_uppercase("464354");
        int y = ft_str_is_uppercase("\0");
        printf("%d, %d", x, y);
}*/
