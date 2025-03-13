/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cap_words.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:12:18 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/09 18:32:58 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int n = 0;

	if (argc != 2)
		write(1, "\n", 1);
	if (char_alpha(argv[1][0]) == 1)
	{
		argv[1][0] -= 32;
		n++;
	}
	while (argv[1][n])
	{
		while (argv[1][n] == ' ' || argv[1][n] == '\t')
			n++;
		if ((char_alpha(argv[1][n]) == 1) && (argv[1][n-1] == ' ' || argv[1][n-1] == '\t'))
		{
			argv[1][n] -= 32;
			n++;
		}
		n++;
	}
	printf("%s", argv[1]);
	return (0);
}
