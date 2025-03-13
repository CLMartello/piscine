/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:28:22 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/20 14:46:35 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int main(void)
{
	ft_putchar('t');
}
*/

/*
int main(int argc, char *argv[])
{
	char c = argv[1][0];
	ft_putchar(c);
}
*/
