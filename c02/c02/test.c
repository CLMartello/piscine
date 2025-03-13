/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:08:42 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/24 12:49:28 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	cpy(char *src, char *des)
{
	while(*src != '\0')
	{
		*des = *src;
		src++;
		des++;
	}
	*des = '\0';
}

int	main()
{
	char *x = "banana";
	char des[100];
	cpy(x,des);
	printf("%s", des);
}
