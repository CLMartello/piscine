/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:00:42 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/12 20:14:19 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int l = 0;
	int r;
	char t;

	r = ft_strlen(str) - 1;
	while (l < r)
	{
		t = str[l];
		str[l] = str[r];
		str[r] = t;
		l++;
		r--;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2)
		return (0);
	ft_rev_print(argv[1]);
	printf("%s\n", argv[1]);
}
