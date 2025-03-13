/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:16:12 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/08 16:32:25 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_alpha_num(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (ft_char_is_alpha(str[0]) == 1)
		{
			str[0] -= 32;
			i++;
		}
		while (is_alpha_num(str[i]) == 1 && is_alpha_num(str[i-1]) == 1)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
		while (str[i] == ' ')
			i++;
		if (ft_char_is_alpha(str[i]) == 1)
		{
			str[i] -= 32;
			i++;
		}
		i++;	
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%s\n", argv[1]);
	ft_strcapitalize(argv[1]);
	printf("%s\n", argv[1]);
}
