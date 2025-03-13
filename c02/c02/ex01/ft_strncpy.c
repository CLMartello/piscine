/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:59:43 by clumertz          #+#    #+#             */
/*   Updated: 2025/02/25 14:39:34 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	size_src_dest;

	size_src_dest = 0;
	while (*src != '\0' && size_src_dest < n)
	{
		*dest = *src;
		src++;
		dest++;
		size_src_dest++;
	}
	while (size_src_dest < n)
	{
		dest[size_src_dest] = '\0';
		size_src_dest++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char *y = "laranja";
	char x[1];
	ft_strncpy(x, y, 2);
	printf("%s", x);
}*/
