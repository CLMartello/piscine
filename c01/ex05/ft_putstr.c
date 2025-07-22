/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:49:30 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:19:45 by clumertz         ###   ########.fr       */
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

/*
int	main(void)
{
	ft_putstr("abcd");
	ft_putstr("0123456789");
	ft_putstr("testing all possibilities");
}*/