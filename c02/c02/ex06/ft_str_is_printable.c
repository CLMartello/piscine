/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:25:29 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:58:13 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if (*str < 33 || *str > 126)
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
        int x = ft_str_is_printable("464 354");
        int y = ft_str_is_printable("sajihHSU5454");
        printf("%d, %d", x, y);
}*/
