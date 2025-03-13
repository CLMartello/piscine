
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int c = 0;

	if (argc != 3)

	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		j = 0;
		c = 0;
		while (argv[2][j] != '\0')
		{
			if (argv[1][i] == argv[2][j])
			{	
				c++;
			}
			j++;
		}
		j = i -1;
		while (j >= 0)
		{
			if (argv[1][i] == argv[1][j])
			{	
				c = 0;
			}
			j--;
			
		}
		if (c > 0)
		{
			write(1, &argv[1][i], 1);
		}
		i++;

	}
	write(1, "\n", 1);
	return (0);
}

