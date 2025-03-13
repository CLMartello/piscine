/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:02:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/20 14:59:23 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*
void ft_is_negative(int n)
{
        if (n<0)
        {
                write(1,"N",1);
        }
	if (n>=0)
	{
		write(1,"P",1);
	}
        else
        {
                write(2,"Error",5);
        }
}
*/

/*
int main(void)
{
	ft_is_negative(-3);
	ft_is_negative(4);
	ft_is_negative(0);
}
*/
