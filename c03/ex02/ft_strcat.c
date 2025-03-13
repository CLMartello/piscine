/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:52:03 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/01 11:20:48 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	sd;

	i = 0;
	sd = 0;
	while (dest[sd] != '\0')
	{
		sd++;
	}
	while (src[i] != '\0')
	{
		dest[sd + i] = src[i];
		i++;
	}
	dest[sd + i] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>

int    main(int argc, char *argv[])
{
	char	buffer[20] = "carol";
	char	buffer2[20] = "carol";
	if (argc != 2)
	{
		return (0);
	}
	char *x = ft_strcat(buffer, argv[1]);
	printf("%s\n", x);
	char *y = strcat(buffer2, argv[1]);
	printf("%s\n", y);
}
