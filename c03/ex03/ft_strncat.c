/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:51:40 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/01 11:24:35 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	sd;

	i = 0;
	sd = 0;
	while (dest[sd] != '\0')
	{
		sd++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[sd + i] = src[i];
		i++;
	}
	dest[sd + i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    main(int argc, char *argv[])
{
	char	buffer[20] = "carol";
	char	buffer2[20] = "carol";
	if (argc != 3)
	{
		return (0);
	}
	char *x = ft_strncat(buffer, argv[1], atoi(argv[2]));
	printf("%s\n", x);
	char *y = strncat(buffer2, argv[1], atoi(argv[2]));
	printf("%s\n", y);
}
