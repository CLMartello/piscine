
#include <unistd.h>

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int i = 0;
	int s;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	s = ft_strlen(argv[1]) - 1;
	while (argv[1][s] == ' ' || argv[1][s] == '\t')
	{
		s--;
	}
	while (argv[1][s] > 32 && argv[1][s] < 127)
	{
		s--;
	}
	s++;
	while (argv[1][s] != ' ' && argv[1][s] != '\t' && argv[1][s] != '\0')
	{
		write(1, &argv[1][s], 1);
		s++;
	}
	write(1, "\n", 1);
	return (0);
}
