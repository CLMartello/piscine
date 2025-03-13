/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:51:39 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/20 14:45:54 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

/*
void ft_print_alphabet(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		write(1,&c,1);
		c++;
	}
}
*/

/*
int main(void)
{
	ft_print_alphabet();
}
*/
