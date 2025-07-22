/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:01:18 by clumertz          #+#    #+#             */
/*   Updated: 2025/07/21 22:28:47 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	nd;
	unsigned int	ns;

	nd = 0;
	ns = 0;
	while (dest[nd] != '\0')
	{
		nd++;
	}
	while (src[ns] != '\0' && (nd + ns) < (size - 1))
	{
		dest[nd + ns] = src[ns];
		ns++;
	}
	dest[nd + ns] = '\0';
	while (src[ns] != '\0')
	{
		ns++;
	}
	if (nd > size)
		return (ns + size);
	return (nd + ns);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int	main(int argc, char *argv[])
{
	char	buffer[20] = "carol";
	char	buffer2[20] = "carol";

	if (argc != 3)
	{
		return (0);
	}
	int n = atoi(argv[2]);
	int x = ft_strlcat(buffer, argv[1], n);
	printf("%s\n", buffer);
	printf("%d\n", x);
	int y = strlcat(buffer2, argv[1], n);
	printf("%s\n", buffer2);
	printf("%d\n", y);
}
*/