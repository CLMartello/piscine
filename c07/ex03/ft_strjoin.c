/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:18:15 by clumertz          #+#    #+#             */
/*   Updated: 2025/03/10 20:08:09 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_strlen(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_calc_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = ((size - 1) * ft_strlen(sep));
	while (i < size)
	{
		len = len + (ft_strlen(strs[i]));
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	res = NULL;
	if (size == 0)
	{
		res = (char *) malloc(1);
		res[0] = '\0';
		return (res);
	}
	len = ft_calc_len(size, strs, sep);
	res = (char *)malloc(len * sizeof(char) + 1);
	if (res == NULL)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size -1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	int size = argc - 1;
	char *res = ft_strjoin(size, &argv[1], "**");
	printf("%s\n", res);
	free(res);
}*/
