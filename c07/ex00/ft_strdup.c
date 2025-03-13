/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:12:39 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/10 20:02:04 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		n;
	char	*dest;

	n = 0;
	while (src[n] != '\0')
		n++;
	dest = malloc(n * sizeof(char) + 1);
	if (!dest)
		return (0);
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char * dest = ft_strdup("banana");
	printf("%s", dest);
}*/
