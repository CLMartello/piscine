/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:13:13 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/01 18:01:16 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	nf;

	n = 0;
	nf = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n] != '\0')
	{
		while (str[n+nf] == to_find[nf])
		{
			nf++;
			if (to_find[nf] == '\0')
			{
				return (&str[n]);
			}
		}
		n++;
		nf = 0;
	}
	return (0);
}

#include <stdio.h>      
#include <unistd.h>
#include <string.h>

int    main(int argc, char *argv[])
{
	if (argc != 3)
	{
		return (0);
	}
	char *x = ft_strstr(argv[1], argv[2]);
	printf("Meu resultado: %s\n", x);
	char *y = strstr(argv[1], argv[2]);
	printf("Resultado funcao: %s\n", y);
}
