/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:09:10 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:49:57 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			if (*str < 97 || *str > 122)
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
        int x = ft_str_is_lowercase("sjdjdidkdasHjsisjaisahs");
        int y = ft_str_is_lowercase("aaaaaajisdahuwejbedasjfsgyug");
        printf("%d, %d", x, y);
}*/
