
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	int c = 0;

	while(str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}			
		while (str[i] > 32 && str[i] < 127)
		{
			c++;
		}
		i++;		
	}
	printf("%d\n", c);
	printf("%d\n", i);
	return (c);
}

char	**ft_split(char *str)
{
	int i = 0;
	int l_i;
	int i_w;
	int i_r = 0;
	char *word;
	char **res;

	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		l_i = i;
		while (str[i] > 32 && str[i] < 127)
		{
			i++;
		}
		word = NULL;
		word = (char *) malloc((i - l_i) * sizeof(char) + 1);
		if (!word)
			return (0);
		i_w = 0;
		while (l_i < i)
		{
			word[i_w] = str[l_i];
			i_w++;
			l_i++;
		}
		word[i_w] = '\0';
		res[i_r] = word;
		i_r++;
	}
	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	printf("%s\n", res[2]);
	return (res);
}

int	main(void)
{
	ft_strlen(" 123 456 789 ");
	ft_split("123 456 789");
}
