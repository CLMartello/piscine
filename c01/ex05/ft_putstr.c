/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:49:30 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/24 14:35:17 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &str[0], 1);
		str++;
	}
}


int	main(void)
{
	ft_putstr("abcd");
	ft_putstr("0123456789");
	ft_putstr("testing all possibilities");
}

/*
void    ft_putstr(char *str)
{
        int n;
        char *salve_str;

        *salve_str = *str;
        n = 0;
        while (*str != '\0')
        {
                str++;
                n++;
        }

        write(1, salve_str, n);
}
*/
