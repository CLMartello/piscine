/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:20:41 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/13 20:26:53 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int val;
	int sig;

	i = 0;
	val = 0;
	sig = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sig *= -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				val = val * 10 + (str[i] - '0');
				i++;
			}
			return (val * sig);
		}
		i++;
	}
	return (val * sig);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%d", ft_atoi(argv[1]));
	return (0);
}
